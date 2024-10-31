#define _CRT_SECURE_NO_WARNINGS
#include "usermanagementsystem.h"
// 宏定义
#define TITLE "门禁管理系统"
#define AUTHOR "作者: 老黄头"
#define NR(x) (sizeof(x) / sizeof(x[0]))
#define MAX_LINE_LENGTH 256
#define MAX_USERS 200


 owner user[201];
 int count=0;

// 枚举类型定义
enum { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ENTER = 13, ESC = 27 };




// 光标信息
CONSOLE_CURSOR_INFO cci;
COORD pos;

//读取文件



void Usermanagementsystem()
{
	// 菜单项
	char* menu[] = {
		"1. 添加用户","2. 删除用户","3. 修改用户信息","4. 查看用户信息","5. 显示全部用户信息","6. 退出"
	};
	int index = 0; // 当前选中的菜单项索引
	HANDLE hOut;   // 控制台输出句柄
	SetConsoleTitleA(TITLE); // 设置控制台标题

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(hOut, &cci); // 获取光标信息
	cci.dwSize = 1; // 设置光标大小
	cci.bVisible = 0; // 隐藏光标
	SetConsoleCursorInfo(hOut, &cci); // 应用光标设置

	while (1) {

		

		showmenu(hOut, menu, NR(menu), index); // 显示菜单
		int ret = get_userinput(&index, NR(menu)); // 获取用户输入

		if (ret == ESC) break; // 按下 ESC 键退出

		if (ret == ENTER) {
			count=read_user_file("user.txt",user,count);
			switch (index) { // 根据当前选中的菜单项执行相应操作
			case 0:
				add_user(user,&count);
				break; // 添加用户
			case 1:
				delete_user(user, &count);
				break; // 删除用户
			case 2:
				modify_user(user, count);
				break; // 修改用户
			case 3:
				view_user(user, count);
				break; // 查看用户、
			case 4:

				for (int i = 0; i < count; i++)
				{
					printf("\n姓名: %s, 大门: %02d, 楼门: %c, 单元门: %d, 门禁卡: %s",
						user[i].name,
						user[i].ownerfoor.door_id,
						user[i].ownerfoor.building,
						user[i].ownerfoor.floordoor,
						user[i].keycard);
				}
				printf("\n");
				
				break; // 显示全部
			case 5:
				return; // 退出
			}

			save_users_to_file(user, count, "user.txt");
			system("pause");
		}
		//
	}
	return 0;
}


//查看开门记录
void print_open_time(const char* filename) {
	FILE* file = fopen(filename, "r");
	if (file == NULL) {
		perror("无法打开文件");
		return;
	}
	printf("\n");
	char line[256]; // 假设每行最多256个字符
	while (fgets(line, sizeof(line), file)) {
		printf("%s", line);
	}

	fclose(file);
}