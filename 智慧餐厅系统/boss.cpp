#include "boss.h"
using namespace std;
//�вι���
Boss::Boss(string name, string num)
{
	my_name = name;
	my_num = num;
}
//�޲�
Boss::Boss()
{
	;
}
//��¼����
void Boss::loginMenu()
{
	cout << "-----------------------------------------��ӭ�����ϰ����----------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        ��¼" << endl;
	cout << "\t\t\t\t" << "2.        ע��" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}
//�ϰ��Ӳ˵�
void Boss::bossMenu()
{
	cout << "-----------------------------------------��ӭ�����ϰ����----------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ�����²�����" << endl;
	cout << "\t\t\t\t" << "1.        �鿴Ӫҵ��" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}
//�ϰ���ϵͳ
void Boss::bossSystem()
{
	Boss user;
	Ordermanager order;
	while (1)
	{
		user.bossMenu();
		int input;
		cin >> input;
		system("cls");
		switch (input)
		{
		case 1:
		{
			cout << "\t\t---------------------------------------------�鿴����--------------------------------------------" << endl;
			order.showTurnover();
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