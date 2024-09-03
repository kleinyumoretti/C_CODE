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
	//有参构造
	User(const string name,const string num);
	//无参构造函数
	User();
	//获取名字
	string getname();
	//获取账号
	string getnum();
	//登录界面
	virtual void loginMenu();

};