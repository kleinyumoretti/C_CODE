#pragma once
#include <iostream>
#include <string>
using namespace std;
class User
{
protected:
	string my_name;
	string my_num;
public:
	//�вι���
	User(const string name,const string num);
	//�޲ι��캯��
	User();
	//��ȡ����
	string getname();
	//��ȡ�˺�
	string getnum();
	//��¼����
	virtual void loginMenu();

};