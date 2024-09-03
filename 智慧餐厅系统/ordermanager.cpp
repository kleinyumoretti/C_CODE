#include "ordermanager.h"
using namespace std;
Ordermanager::Ordermanager(string filename)
{
	ifstream ifs(filename);
	int num;
	string name;
	double new_price;
	string introduction;
	while (ifs >> num, ifs >> name, ifs >> new_price, ifs >> introduction)
	{
		order.push_back(Menuitem(num, name, new_price, introduction));
		price += new_price;
	}
	ifs.close();

}
Ordermanager::Ordermanager()
{
	;
}
void Ordermanager::addOrder(Menuitem& menuitem)
{
	order.push_back(menuitem);
	price += menuitem.getprice();
}
void Ordermanager::deleteOrder(int num)
{
	price -= order.at(num).getprice();
	order.erase(order.cbegin()+num);
}
void Ordermanager::showOrder()
{
	cout << "���Ķ���Ϊ��" << endl;
	cout << "\t\t���  ��Ʒ\t\t\t�۸�" << endl;
	
	for (vector<Menuitem>::iterator it = order.begin(); it != order.end(); it++)
	{
		cout << "\t\t" <<it->getnum()<<"     " << it->getname() << "------------------��" << it->getprice() << endl;
	}
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\tӦ����" << "----------------------��" << price << endl;
}
void Ordermanager::saveOrder(string filename)
{
	ofstream ofs(filename);
	for (vector<Menuitem>::iterator it = order.begin(); it != order.end(); it++)
	{
		ofs <<  it->getnum() << " " << it->getname() << " " << it->getprice() << " " << it->getintroduction() << endl;
	}
	ofs.close();
}
//�鿴Ӫҵ��
void Ordermanager::showTurnover()
{
	;
}