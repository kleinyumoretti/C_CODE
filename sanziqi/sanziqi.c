#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include <stdlib.h>
void menu()
{
	printf("******************************************\n");
	printf("******1.play    0.exit********************\n");
	printf("******************************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		Sleep(3000);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");	
		Sleep(3000);
		system("cls");

	}
	else
	{
		printf("ƽ��\n");
		Sleep(3000);
		system("cls");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}