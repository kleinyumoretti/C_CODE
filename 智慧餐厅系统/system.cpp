#include "system.h"
using namespace std;
//ϵͳ���˵�
void System::systemMenu()
{
	cout << "---------------------------------------��ӭ�����ǻ۲���ϵͳ----------------------------------------" << endl;
	cout << "\t\t\t\t" << "��ѡ��������ݣ�" << endl;
	cout << "\t\t\t\t" << "1.        ��ʦ" << endl;
	cout << "\t\t\t\t" << "2.        ����Ա" << endl;
	cout << "\t\t\t\t" << "3.        �˿�" << endl;
	cout << "\t\t\t\t" << "4.        �ϰ�" << endl;
	cout << "\t\t\t\t" << "0.        �뿪" << endl;
}



//��¼
void System::systemLogin(int select)
{
	//�����û���Ϣ
	vector<User> users;
	ifstream ifs ("user.txt");
	string name;
	string num;
	while (ifs >> name, ifs >> num)
	{
		users.push_back(User(name, num));
	}
	ifs.close();


	//���
	
	//for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
	//{
	//	cout << it->getname() << " " << it->getnum() << endl;
	//}
	
	
	//system("pause");
	//return;
	
	//д��
	/*ofstream ofs("user.txt",ofstream::app);
	ofs << "���Ĵ� 111" << endl;
	ofs.close();
	return;*/
	User* people;
	int choice;
	
	
	switch (select)
	{
	case 1://��ʦ
		while (1)
		{
			Chef che;
			people = &che;
			people->loginMenu();
			cin >> choice;
			if (choice == 1)   //��¼
			{
				string name;
				string password;
				cout << "����������" << endl;
				cin >> name;
				cout << "����������" << endl;
				cin >> password;

				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name && it->getnum() == password)
					{
						cout << "��½�ɹ�" << endl;
						Sleep(2000);
						system("cls");
						che.chefSystem();
						//��ϵͳ���
						return;
					}
				}
				cout << "�������������д�����ע����Ժ�����" << endl;
				Sleep(3000);
				break;
			}
			else if (choice == 2)	//ע��
			{
				string name;
				string password;
				cout << "����������" << endl;
				cin >> name;
				cout << "����������" << endl;
				cin >> password;
				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name)
					{
						cout << "���û���ע��" << endl;
						Sleep(2000);
						system("cls");
						return;
					}

				}
				ofstream ofs("user.txt", ofstream::app);
				ofs << name << " " << password << endl;
				ofs.close();
				cout << "�û�ע��ɹ�" << endl;
				Sleep(2000);
				system("cls");
				break;

			}
			else//�뿪
			{
				return;
			}
		}
	case 2://����Ա
		while (1)
		{
			Waiter wai;
			people = &wai;
			people->loginMenu();
			cin >> choice;
			if (choice == 1)   //��¼
			{
				string name;
				string password;
				cout << "����������" << endl;
				cin >> name;
				cout << "����������" << endl;
				cin >> password;

				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name && it->getnum() == password)
					{
						cout << "��½�ɹ�" << endl;
						Sleep(2000);
						system("cls");
						wai.waiterSystem();
						//��ϵͳ���
						return;
					}
				}
				cout << "�������������д�����ע����Ժ�����" << endl;
				Sleep(3000);
				break;
			}
			else if (choice == 2)	//ע��
			{
				string name;
				string password;
				cout << "����������" << endl;
				cin >> name;
				cout << "����������" << endl;
				cin >> password;
				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name)
					{
						cout << "���û���ע��" << endl;
						Sleep(2000);
						system("cls");
						return;
					}

				}
				ofstream ofs("user.txt", ofstream::app);
				ofs << name << " " << password << endl;
				ofs.close();
				cout << "�û�ע��ɹ�" << endl;
				Sleep(2000);
				system("cls");
				break;

			}
			else//�뿪
			{
				return;
			}
		}
	case 3:
		//�˿�
		while(1)
		{
		Customer cus;
		people = &cus;
		people->loginMenu();
		cin >> choice;
		if (choice == 1)   //��¼
		{
			string name;
			string password;
			cout << "����������" << endl;
			cin >> name;
			cout << "����������" << endl;
			cin >> password;

			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
			{
				if (it->getname() == name && it->getnum() == password)
				{
					cout << "��½�ɹ�" << endl;
					Sleep(2000);
					system("cls");
					cus.customerSystem();
					//�˿��Ӳ˵����
					return;
				}
			}
			cout << "�������������д�����ע����Ժ�����" << endl;
			Sleep(3000);
			break;
		}
		else if (choice == 2)	//ע��
		{
			string name;
			string password;
			cout << "����������" << endl;
			cin >> name;
			cout << "����������" << endl;
			cin >> password;
			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
			{
				if (it->getname() == name)
				{
					cout << "���û���ע��" << endl;
					Sleep(2000);
					system("cls");
					return ;
				}

			}
			ofstream ofs("user.txt",  ofstream::app);
			ofs << name << " " << password << endl;
			ofs.close();
			cout << "�û�ע��ɹ�" << endl;
			Sleep(2000);
			system("cls");
			break;

		}
		else//�뿪
		{
			return;
		}
		}
	
	case 4:
	//	while (1)
	//	{
	//		Chef che;
	//		people = &che;
	//		people->loginMenu();
	//		cin >> choice;
	//		if (choice == 1)   //��¼
	//		{
	//			string name;
	//			string password;
	//			cout << "����������" << endl;
	//			cin >> name;
	//			cout << "����������" << endl;
	//			cin >> password;

	//			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
	//			{
	//				if (it->getname() == name && it->getnum() == password)
	//				{
	//					cout << "��½�ɹ�" << endl;
	//					Sleep(2000);
	//					system("cls");
	//					che.chefSystem();
	//					//��ϵͳ���
	//					return;
	//				}
	//			}
	//			cout << "�������������д�����ע����Ժ�����" << endl;
	//			Sleep(3000);
	//			break;
	//		}
	//		else if (choice == 2)	//ע��
	//		{
	//			string name;
	//			string password;
	//			cout << "����������" << endl;
	//			cin >> name;
	//			cout << "����������" << endl;
	//			cin >> password;
	//			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
	//			{
	//				if (it->getname() == name)
	//				{
	//					cout << "���û���ע��" << endl;
	//					Sleep(2000);
	//					system("cls");
	//					return;
	//				}

	//			}
	//			ofstream ofs("user.txt", ofstream::app);
	//			ofs << name << " " << password << endl;
	//			ofs.close();
	//			cout << "�û�ע��ɹ�" << endl;
	//			Sleep(2000);
	//			system("cls");
	//			break;

	//		}
	//		else//�뿪
	//		{
	//			return;
	//		}
	//	}
		break;
	}

}
//�뿪
void System::systemExit()
{
	cout << "---------------------------------------��ӭ�����ǻ۲���ϵͳ----------------------------------------" << endl;
	cout << endl<<endl;
	cout << "\t\t\t\t" << "��������ӭ�´�ʹ�ã�����" << endl;
}
