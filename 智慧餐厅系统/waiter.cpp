#include "waiter.h"
using namespace std;
//�вι���
Waiter::Waiter(string name, string num)
{
	my_name = name;
	my_num = num;
}
//�޲�
Waiter::Waiter()
{
	;
}
//��¼����
void Waiter::loginMenu()
{
	cout << "----------------------------------------��ӭ�������Ա����---------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        ��¼" << endl;
	cout << "\t\t\t\t" << "2.        ע��" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}
//����Ա�Ӳ˵�
void Waiter::waiterMenu()
{
	cout << "----------------------------------------��ӭ�������Ա����---------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        �鿴����" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}
//����Ա��ϵͳ
void Waiter::waiterSystem()
{
	Waiter user;
	Ordermanager order("order.txt");
	while (1)
	{
		user.waiterMenu();
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