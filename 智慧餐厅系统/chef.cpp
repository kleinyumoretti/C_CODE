#include "chef.h"
using namespace std;
//�вι���
Chef::Chef(string name, string num)
{
	my_name = name;
	my_num = num;
}
//�޲�
Chef::Chef()
{
	;
}
//��¼����
void Chef::loginMenu()
{
	cout << "-----------------------------------------��ӭ�����ʦ����----------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        ��¼" << endl;
	cout << "\t\t\t\t" << "2.        ע��" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}
//��ʦ�Ӳ˵�
void Chef::chefMenu()
{
	cout << "-----------------------------------------��ӭ�����ʦ����----------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        �鿴����" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}
//��ʦ��ϵͳ
void Chef::chefSystem()
{
	Chef user;
	Ordermanager order("order.txt");
	while (1)
	{
		user.chefMenu();
		int input;
		cin >> input;
		system("cls");
		switch (input)
		{
		case 1:
		{
			cout << "\t\t---------------------------------------------�鿴����--------------------------------------------" << endl;
			order.showOrder();
			Sleep(5000);
			system("cls");
			break;
		}

		default://�뿪
			return;
		}
	}


	return;
}