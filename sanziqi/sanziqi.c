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
		//玩家下棋
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		Sleep(3000);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");	
		Sleep(3000);
		system("cls");

	}
	else
	{
		printf("平局\n");
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
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}