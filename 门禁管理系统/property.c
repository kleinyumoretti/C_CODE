#define _CRT_SECURE_NO_WARNINGS
#include "property.h"
// �궨��
#define TITLE "�Ž�����ϵͳ"
#define AUTHOR "����: �ϻ�ͷ"
#define NR(x) (sizeof(x) / sizeof(x[0]))

// ö�����Ͷ���
enum { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ENTER = 13, ESC = 27 };

// �˵���


// �����Ϣ
CONSOLE_CURSOR_INFO cci;
COORD pos;


void Property()
{
	char* menu[] = {
		"1. �����û���Ϣ","2. ��ʾ���ż�¼","3. �˳�"
	};
	int index = 0; // ��ǰѡ�еĲ˵�������
	HANDLE hOut;   // ����̨������
	SetConsoleTitleA(TITLE); // ���ÿ���̨����

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(hOut, &cci); // ��ȡ�����Ϣ
	cci.dwSize = 1; // ���ù���С
	cci.bVisible = 0; // ���ع��
	SetConsoleCursorInfo(hOut, &cci); // Ӧ�ù������

	while (1) {
		showmenu(hOut, menu, NR(menu), index); // ��ʾ�˵�
		int ret = get_userinput(&index, NR(menu)); // ��ȡ�û�����

		if (ret == ESC) break; // ���� ESC ���˳�

		if (ret == ENTER) {
			switch (index) { // ���ݵ�ǰѡ�еĲ˵���ִ����Ӧ����
			case 0:
				Usermanagementsystem();
				break; // �����û���Ϣ
			case 1:
				print_open_time("open_time.txt");
				system("pause");
				break; // ��ʾ���ż�¼
			case 2:
				return ; // �˳�
			}
		}
	}
	return 0;
}
