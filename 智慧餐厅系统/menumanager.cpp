#include "menumanager.h"
using namespace std;
Menumanager::Menumanager(string filename)
{
	//���ز˵�
	ifstream ifs(filename);
		int num;
		string name;
		double price;
		string introduction;
		while (ifs >> num, ifs >> name, ifs >> price, ifs >> introduction)
		{
			menuitems.push_back(Menuitem(num, name, price, introduction));
		}
		ifs.close();
}
//��ʾ�˵�
void Menumanager::displayMenu()
{
	for (vector<Menuitem>::iterator it = menuitems.begin(); it != menuitems.end(); it++)
	{
		cout <<"\t\t"<< it->getnum() << " " << it->getname() << "-��" << it->getprice() << " ���ܣ�" << it->getintroduction() << endl;
	}
}

//��ò�Ʒ
vector<Menuitem>& Menumanager::getMenu() 
{
	return menuitems;
}