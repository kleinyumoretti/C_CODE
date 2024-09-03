#include "menumanager.h"
using namespace std;
Menumanager::Menumanager(string filename)
{
	//加载菜单
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
//显示菜单
void Menumanager::displayMenu()
{
	for (vector<Menuitem>::iterator it = menuitems.begin(); it != menuitems.end(); it++)
	{
		cout <<"\t\t"<< it->getnum() << " " << it->getname() << "-￥" << it->getprice() << " 介绍：" << it->getintroduction() << endl;
	}
}

//获得菜品
vector<Menuitem>& Menumanager::getMenu() 
{
	return menuitems;
}