#include "interface.h"

// �궨��
#define TITLE "�Ž�����ϵͳ"
#define AUTHOR "����: �ϻ�ͷ"
#define NR(x) (sizeof(x) / sizeof(x[0]))


// ö�����Ͷ���
enum { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ENTER = 13, ESC = 27 };


// �����Ϣ
CONSOLE_CURSOR_INFO cci;
COORD pos;


void showmenu(HANDLE hOut, char** menu, int size, int index) {
	system("cls"); // ����
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | 0x8); // �����ı���ɫΪ��ɫ

	// ������⡢���ߺ�����
	pos.X = 32;
	pos.Y = 0;
	SetConsoleCursorPosition(hOut, pos);
	printf("%s", TITLE);
	pos.X = 32;
	pos.Y = 1;
	SetConsoleCursorPosition(hOut, pos);
	printf("%s", AUTHOR);

	// ��ʾ�˵���
	for (int i = 0; i < size; i++) {
		if (i == index) { // ��ǰѡ����
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | 0x8); // ����Ϊ��ɫ
		}
		else {
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // ����Ϊ��ɫ
		}
		pos.X = 30;
		pos.Y = 5 + i; // ���ù��λ��
		SetConsoleCursorPosition(hOut, pos); // �ƶ����
		printf("%s", menu[i]); // ����˵���
	}
	fflush(stdout); // ˢ�±�׼���������
}

int get_userinput(int* index, int size) {
	int ch = _getch(); // ��ȡ�û�����
	switch (ch) {
	case UP: // �ϼ�
		if (*index > 0) *index -= 1; // �ƶ�����һ���˵���
		break;
	case DOWN: // �¼�
		if (*index < size - 1) *index += 1; // �ƶ�����һ���˵���
		break;
	case ENTER:
		return ENTER; // �س������� ENTER
	case ESC:
		return ESC; // ESC������ ESC
	}
	return 0;
}