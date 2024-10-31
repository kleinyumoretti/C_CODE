#include "ownersystem.h"

// �궨��
#define TITLE "�Ž�����ϵͳ"
#define AUTHOR "����: �ϻ�ͷ"
#define NR(x) (sizeof(x) / sizeof(x[0]))

#define MAX_USERS 500
#define MAX_LINE_LENGTH 255

// �����û��ṹ��
typedef struct {
    int door_id;            // ���ţ�01, 02������
    char building;          // ¥�ţ�A, B��
    int floordoor;          // ��Ԫ�ţ�202, 101��
} door;

typedef struct {
    char name[255];          // ����
    door  ownerfoor;        // סַ�ṹ��
    char keycard[255];      // �Ž���
} owner;

void Opentime(const char* name);
void Findopentimes();

void Owner() {
    owner users[MAX_USERS];
    owner existingUser;
    char name[255];
    char keycard[255];
    int count = 0;

    printf("\n����������:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // ȥ�����з�

    printf("�������Ž���:");
    fgets(keycard, sizeof(keycard), stdin);
    keycard[strcspn(keycard, "\n")] = 0; // ȥ�����з�

    FILE* file = fopen("user.txt", "r");
    if (file == NULL) {
        perror("�޷����ļ�");
        return;
    }

    char buffer[MAX_LINE_LENGTH];
    while (fgets(buffer, sizeof(buffer), file) != NULL && count < MAX_USERS) {
        // ȥ�����з�
        buffer[strcspn(buffer, "\n")] = '\0';

        // �����ַ�����ȷ�����ݸ�ʽ��ȷ
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
            existingUser = users[i]; // �����ҵ����û�
            found = 1;
            break;
        }
    }

    if (found) {
        printf("���ųɹ���\n");
        printf("��ӭ, %s\n", existingUser.name);
        Opentime(existingUser.name);
    }
    else {
        printf("����ʧ��: �������Ž�������\n");
    }
   //getchar();
    system("pause");
}

void Opentime(const char* name) {
    FILE* log_file = fopen("open_time.txt", "a");
    if (log_file == NULL) {
        perror("�޷�����־�ļ�");
        return;
    }

    time_t now;
    time(&now);
    char* time_str = ctime(&now);
    time_str[strcspn(time_str, "\n")] = 0; // ȥ�����з�

    char log_entry[300];
    snprintf(log_entry, sizeof(log_entry), "�û�: %s, ����ʱ��: %s\n", name, time_str);
    fputs(log_entry, log_file);

    fclose(log_file);
}

void Findopentimes() {
    FILE* log_file = fopen("open_time.txt", "r");
    if (log_file == NULL) {
        perror("�޷�����־�ļ�");
        return;
    }

    char buffer[255];
    printf("\n���ż�¼:\n");
    while (fgets(buffer, sizeof(buffer), log_file) != NULL) {
        printf("%s", buffer);
    }
    system("pause");
    fclose(log_file);
}