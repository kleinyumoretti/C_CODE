#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include "interface.h"
#include "property.h"
#include "ownersystem.h"

// �궨��
#define TITLE "�Ž�����ϵͳ"
#define AUTHOR "����: �ϻ�ͷ"
#define NR(x) (sizeof(x) / sizeof(x[0]))

// ö�����Ͷ���
enum { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ENTER = 13, ESC = 27 };

// �˵���
char* menu[] = {
	"1. ��ݣ���ҵ","2. ��ݣ�ҵ��","3. �˳�"
};

// �����Ϣ
CONSOLE_CURSOR_INFO cci;
COORD pos;



int main() {
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
				Property();
				break; //��ҵ
			case 1:
				Owner();
				break; // ҵ��
			case 2:
				return 0; // �˳�
			}
		}
	}
	return 0;
}
