#include "customer.h"
using namespace std;
//�вι���
Customer::Customer(string name, string num)
{
	my_name = name;
	my_num = num;
}
//�޲ι���
Customer::Customer()
{
	;
}
//��¼����
void Customer::loginMenu()
{
	cout << "-----------------------------------------��ӭ����˿ͽ���----------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        ��¼" << endl;
	cout << "\t\t\t\t" << "2.        ע��" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}
//�˿��Ӳ˵�
void Customer::customerMenu()
{
	cout << "-----------------------------------------��ӭ����˿ͽ���----------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        ���" << endl;
	cout << "\t\t\t\t" << "2.        �鿴����" << endl;
	cout << "\t\t\t\t" << "3.        �޸Ķ���" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}

void Customer::customerSystem()
{
	Customer user;
	Ordermanager order;
	while (1)
	{
		user.customerMenu();
		Menumanager menu("menu.txt");
		int input;
		cin >> input;
		system("cls");
		switch(input)
		{
		case 1://���
		{
			
			cout << "\t\t---------------------------------------------�˵�����--------------------------------------------" << endl;
			menu.displayMenu();
			
			int input;
			cout << endl << "\t\t\t\t\t\t" << "�������Ʒ���" << endl;
			cout << "\t\t\t\t\t\t" << "������������" << endl;
			while (cin >> input, input)
			{
				if (input >= 1 && input <= 8)
					order.addOrder(menu.getMenu()[input-1]);
			}
			cout << "��ͳɹ�" << endl;
			order.showOrder();
			order.saveOrder("order.txt");
			Sleep(5000);
			system("cls");
			break;
		}
		
		case 2://�鿴����
			cout << "\t\t---------------------------------------------�鿴����--------------------------------------------" << endl;
			order.showOrder();
			Sleep(3000);
			system("cls");
			break;
		case 3://ɾ������
			cout << "\t\t---------------------------------------------�޸Ķ���--------------------------------------------" << endl;
			order.showOrder();
			cout << "\t\t\t��������Ҫɾ������ţ�" << endl;
			cout << "\t\t\t   " << "������������" << endl;
			while (cin >> input, input)
			{
				if (input >= 1 && input <= 8)
					order.deleteOrder(input-1);
			}
			cout << "�޸ĳɹ�:" << endl;
			order.showOrder();
			order.saveOrder("order.txt");
			Sleep(3000);
			system("cls");
			break;
		default://�뿪
			return;
		}
	}


	return;
}