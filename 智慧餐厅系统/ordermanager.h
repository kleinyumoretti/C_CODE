#pragma once
#include "menuitem.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Ordermanager
{
protected:
	vector<Menuitem> order;
	double price;
public:
	Ordermanager(string filename);
	Ordermanager();
	void addOrder(Menuitem& menuitem);
	void deleteOrder(int num);
	void showOrder();
	void saveOrder(string filename);
	void showTurnover();
};