#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Boss :public User
{
public:
	//�вι���
	Boss(string name, string num);
	//�޲�
	Boss();
	//��¼����
	void loginMenu();
	//�ϰ��Ӳ˵�
	void bossMenu();
	//�ϰ���ϵͳ
	void bossSystem();
};
