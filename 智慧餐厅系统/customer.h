#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Customer :public User
{
public:
	//�вι���
	Customer(string name, string num);
	//�޲ι���
	Customer();
	//��¼����
	void loginMenu();
	//�˿��Ӳ˵�
	void customerMenu();
	//�˿���ϵͳ
	void customerSystem();
};
