#pragma once
#include <iostream>
#include <string>
using namespace std;

class Menuitem
{
protected:
	int my_num;
	string my_name;
	double my_price;
	string my_introduction;
public:
	Menuitem(int num,string name, double price, string introduction);
	Menuitem();
	int getnum();
	string getname();
	double getprice();
	string getintroduction();
};