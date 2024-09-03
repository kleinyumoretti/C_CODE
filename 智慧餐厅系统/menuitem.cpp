#include "menuitem.h"
using namespace std;
Menuitem::Menuitem(int num,string name, double price, string introduction)
{
	my_num = num;
	my_name = name;
	my_price = price;
	my_introduction = introduction;
}
Menuitem::Menuitem()
{
	;
}
int Menuitem::getnum()
{
	return my_num;
}
string Menuitem::getname()
{
	return my_name;
}
double Menuitem::getprice()
{
	return my_price;
}
string Menuitem::getintroduction()
{
	return my_introduction;
}