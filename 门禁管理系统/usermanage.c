#include "usermanage.h"
#define MAX_LINE_LENGTH 256
#define MAX_USERS 200

//读入文件
int read_user_file(const char* file_path,owner *user) {
	int count = 0;
	FILE* file = fopen(file_path, "r");
	if (file == NULL) {
		perror("无法打开文件");
		return;
	}

	char buffer[MAX_LINE_LENGTH];

	while (fgets(buffer, sizeof(buffer), file) != NULL && count < MAX_USERS) {
		// 去除换行符
		buffer[strcspn(buffer, "\n")] = '\0';

		// 解析字符串
		sscanf(buffer, "%[^,],%d,%c,%d,%[^,]",
			user[count].name,
			&user[count].ownerfoor.door_id,
			&user[count].ownerfoor.building,
			&user[count].ownerfoor.floordoor,
			user[count].keycard);

		count++;
	}

	fclose(file);
	return count;
}

//保存文件
void save_users_to_file(const owner* users, int count, const char* file_path) {
	FILE* file = fopen(file_path, "w");  // 以覆盖的方式打开文件
	if (file == NULL) {
		perror("无法打开文件");
		return;
	}

	for (int i = 0; i < count; i++) {
		fprintf(file, "%s,%d,%c,%d,%s\n",
			users[i].name,
			users[i].ownerfoor.door_id,
			users[i].ownerfoor.building,
			users[i].ownerfoor.floordoor,
			users[i].keycard);
	}

	fclose(file);
}


//添加用户
void add_user(owner* users, int* user_count) {
	if (*user_count > MAX_USERS) {
		printf("用户数量已达到上限。\n");
		return ; // 用户数量达到上限
	}

	owner new_user;

	// 输入用户信息
	printf("\n请输入姓名: ");
	fgets(new_user.name, sizeof(new_user.name), stdin);
	new_user.name[strcspn(new_user.name, "\n")] = '\0'; // 去除换行符

	printf("请输入大门编号: (01/02)");
	scanf("%d", &new_user.ownerfoor.door_id);
	getchar(); // 处理换行符

	printf("请输入楼门（A/B）: ");
	scanf("%c", &new_user.ownerfoor.building);
	getchar(); // 处理换行符

	printf("请输入单元门: ");
	scanf("%d", &new_user.ownerfoor.floordoor);
	getchar(); // 处理换行符

	printf("请输入门禁卡: ");
	fgets(new_user.keycard, sizeof(new_user.keycard), stdin);
	new_user.keycard[strcspn(new_user.keycard, "\n")] = '\0'; // 去除换行符

	// 将新用户添加到数组中
	users[*user_count] = new_user;
	(*user_count)++; // 增加用户数量

	return ; // 添加成功
}



void delete_user(owner* users, int* user_count) {
	char name[200];
	printf("\n请输入想删除用户姓名：");
	scanf("%s", name);
	for (int i = 0; i < *user_count; i++) {
		if (strcmp(users[i].name, name) == 0) {
			// 找到用户，删除用户
			for (int j = i; j < *user_count - 1; j++) {
				users[j] = users[j + 1]; // 移动后面的用户前移
			}
			(*user_count)--; // 更新用户数量
			printf("删除成功！！！");
			return ; // 删除成功
		}
	}
	printf("用户未找到！！！");
	return ; // 用户未找到
}


void modify_user(owner* users, int user_count) {

	char name[200];
	printf("\n请输入想删除用户姓名：");
	scanf("%s", name);
	for (int i = 0; i < user_count; i++) {
		if (strcmp(users[i].name, name) == 0) {
			// 显示当前信息
			printf("\n当前住址: %d %c %d\n", users[i].ownerfoor.door_id, users[i].ownerfoor.building, users[i].ownerfoor.floordoor);
			printf("当前门禁卡: %s\n", users[i].keycard);

			char confirm;

			// 询问是否修改大门ID
			printf("是否修改住址大门ID? (当前值: %d) (y/n): ", users[i].ownerfoor.door_id);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("请输入新的住址大门ID: ");
				scanf("%d", &users[i].ownerfoor.door_id);
			}

			// 询问是否修改楼门
			printf("是否修改楼门? (当前值: %c) (y/n): ", users[i].ownerfoor.building);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("请输入新的楼门: ");
				getchar(); // 清除输入缓存
				scanf("%c", &users[i].ownerfoor.building);
			}

			// 询问是否修改单元门
			printf("是否修改单元门? (当前值: %d) (y/n): ", users[i].ownerfoor.floordoor);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("请输入新的单元门: ");
				scanf("%d", &users[i].ownerfoor.floordoor);
			}

			// 询问是否修改门禁卡
			printf("是否修改门禁卡? (当前值: %s) (y/n): ", users[i].keycard);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("请输入新的门禁卡: ");
				getchar(); // 清除输入缓存
				fgets(users[i].keycard, sizeof(users[i].keycard), stdin);
				users[i].keycard[strcspn(users[i].keycard, "\n")] = '\0'; // 去除换行符
			}
			printf("修改成功！！！");
			return ; // 修改成功
		}
	}
	printf("没找到该用户！！！");
	return ; // 用户未找到
}


void view_user(owner* users, int user_count) {
	char name[200];
	printf("\n请输入想查找的用户姓名：");
	scanf("%s", name);

	for (int i = 0; i < user_count; i++) {
		if (strcmp(users[i].name, name) == 0) {
			printf("用户姓名: %s\n", users[i].name);
			printf("住址大门ID: %d\n", users[i].ownerfoor.door_id);
			printf("楼门: %c\n", users[i].ownerfoor.building);
			printf("单元门: %d\n", users[i].ownerfoor.floordoor);
			printf("门禁卡: %s\n", users[i].keycard);
			return; // 找到用户后返回
		}
	}
	printf("用户 %s 未找到。\n", name);
}
