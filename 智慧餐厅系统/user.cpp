#include "user.h"
using namespace std;
//�вι���
User::User(string name, string num)
{
	my_name = name;
	my_num = num;
}
//�޲ι��캯��
User::User()
{
	;
}
//��ȡ����
string User::getname()
{
	return my_name;
}
//��ȡ�˺�
string User::getnum()
{
	return my_num;
}
//��¼����
void User::loginMenu()
{
	cout<<"��¼���� "<< endl;
}
