#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Waiter :public User
{
public:
	//�вι���
	Waiter(string name, string num);
	//�޲�
	Waiter();
	//��¼����
	void loginMenu();
	//����Ա�Ӳ˵�
	void waiterMenu();
	//����Ա��ϵͳ
	void waiterSystem();
};