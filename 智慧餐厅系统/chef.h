#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Chef :public User
{
public:
	//�вι���
	Chef(string name, string num);
	//�޲�
	Chef();
	//��¼����
	void loginMenu();
	//��ʦ�Ӳ˵�
	void chefMenu();
	//��ʦ��ϵͳ
	void chefSystem();
};