#include "ownersystem.h"

// 宏定义
#define TITLE "门禁管理系统"
#define AUTHOR "作者: 老黄头"
#define NR(x) (sizeof(x) / sizeof(x[0]))

#define MAX_USERS 500
#define MAX_LINE_LENGTH 255

// 定义用户结构体
typedef struct {
    int door_id;            // 大门（01, 02……）
    char building;          // 楼门（A, B）
    int floordoor;          // 单元门（202, 101）
} door;

typedef struct {
    char name[255];          // 姓名
    door  ownerfoor;        // 住址结构体
    char keycard[255];      // 门禁卡
} owner;

void Opentime(const char* name);
void Findopentimes();

void Owner() {
    owner users[MAX_USERS];
    owner existingUser;
    char name[255];
    char keycard[255];
    int count = 0;

    printf("\n请输入姓名:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // 去除换行符

    printf("请输入门禁卡:");
    fgets(keycard, sizeof(keycard), stdin);
    keycard[strcspn(keycard, "\n")] = 0; // 去除换行符

    FILE* file = fopen("user.txt", "r");
    if (file == NULL) {
        perror("无法打开文件");
        return;
    }

    char buffer[MAX_LINE_LENGTH];
    while (fgets(buffer, sizeof(buffer), file) != NULL && count < MAX_USERS) {
        // 去除换行符
        buffer[strcspn(buffer, "\n")] = '\0';

        // 解析字符串，确保数据格式正确
        sscanf(buffer, "%[^,],%d,%c,%d,%[^,]",
            users[count].name,
            &users[count].ownerfoor.door_id,
            &users[count].ownerfoor.building,
            &users[count].ownerfoor.floordoor,
            users[count].keycard);
        count++;
    }
    fclose(file);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(users[i].name, name) == 0 && strcmp(users[i].keycard, keycard) == 0) {
            existingUser = users[i]; // 保存找到的用户
            found = 1;
            break;
        }
    }

    if (found) {
        printf("开门成功！\n");
        printf("欢迎, %s\n", existingUser.name);
        Opentime(existingUser.name);
    }
    else {
        printf("开门失败: 姓名或门禁卡错误。\n");
    }
   //getchar();
    system("pause");
}

void Opentime(const char* name) {
    FILE* log_file = fopen("open_time.txt", "a");
    if (log_file == NULL) {
        perror("无法打开日志文件");
        return;
    }

    time_t now;
    time(&now);
    char* time_str = ctime(&now);
    time_str[strcspn(time_str, "\n")] = 0; // 去掉换行符

    char log_entry[300];
    snprintf(log_entry, sizeof(log_entry), "用户: %s, 开门时间: %s\n", name, time_str);
    fputs(log_entry, log_file);

    fclose(log_file);
}

void Findopentimes() {
    FILE* log_file = fopen("open_time.txt", "r");
    if (log_file == NULL) {
        perror("无法打开日志文件");
        return;
    }

    char buffer[255];
    printf("\n开门记录:\n");
    while (fgets(buffer, sizeof(buffer), log_file) != NULL) {
        printf("%s", buffer);
    }
    system("pause");
    fclose(log_file);
}