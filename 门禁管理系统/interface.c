#include "interface.h"

// 宏定义
#define TITLE "门禁管理系统"
#define AUTHOR "作者: 老黄头"
#define NR(x) (sizeof(x) / sizeof(x[0]))


// 枚举类型定义
enum { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ENTER = 13, ESC = 27 };


// 光标信息
CONSOLE_CURSOR_INFO cci;
COORD pos;


void showmenu(HANDLE hOut, char** menu, int size, int index) {
	system("cls"); // 清屏
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | 0x8); // 设置文本颜色为绿色

	// 输出标题、作者和日期
	pos.X = 32;
	pos.Y = 0;
	SetConsoleCursorPosition(hOut, pos);
	printf("%s", TITLE);
	pos.X = 32;
	pos.Y = 1;
	SetConsoleCursorPosition(hOut, pos);
	printf("%s", AUTHOR);

	// 显示菜单项
	for (int i = 0; i < size; i++) {
		if (i == index) { // 当前选中项
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | 0x8); // 设置为红色
		}
		else {
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // 设置为白色
		}
		pos.X = 30;
		pos.Y = 5 + i; // 设置光标位置
		SetConsoleCursorPosition(hOut, pos); // 移动光标
		printf("%s", menu[i]); // 输出菜单项
	}
	fflush(stdout); // 刷新标准输出缓冲区
}

int get_userinput(int* index, int size) {
	int ch = _getch(); // 获取用户按键
	switch (ch) {
	case UP: // 上键
		if (*index > 0) *index -= 1; // 移动到上一个菜单项
		break;
	case DOWN: // 下键
		if (*index < size - 1) *index += 1; // 移动到下一个菜单项
		break;
	case ENTER:
		return ENTER; // 回车，返回 ENTER
	case ESC:
		return ESC; // ESC，返回 ESC
	}
	return 0;
}