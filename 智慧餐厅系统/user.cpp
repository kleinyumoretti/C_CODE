#include "user.h"
using namespace std;
//有参构造
User::User(string name, string num)
{
	my_name = name;
	my_num = num;
}
//无参构造函数
User::User()
{
	;
}
//获取名字
string User::getname()
{
	return my_name;
}
//获取账号
string User::getnum()
{
	return my_num;
}
//登录界面
void User::loginMenu()
{
	cout<<"登录界面 "<< endl;
}
