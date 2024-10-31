#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
void showmenu(HANDLE hOut, char** menu, int size, int index);
int get_userinput(int* index, int size);
