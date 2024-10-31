#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include "interface.h"
#include "property.h"
#include "ownersystem.h"

// 宏定义
#define TITLE "门禁管理系统"
#define AUTHOR "作者: 老黄头"
#define NR(x) (sizeof(x) / sizeof(x[0]))

// 枚举类型定义
enum { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ENTER = 13, ESC = 27 };

// 菜单项
char* menu[] = {
	"1. 身份：物业","2. 身份：业主","3. 退出"
};

// 光标信息
CONSOLE_CURSOR_INFO cci;
COORD pos;



int main() {
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
			switch (index) { // 根据当前选中的菜单项执行相应操作
			case 0:
				Property();
				break; //物业
			case 1:
				Owner();
				break; // 业主
			case 2:
				return 0; // 退出
			}
		}
	}
	return 0;
}
