#pragma once
#include "menuitem.h"
#include "ordermanager.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Menumanager
{
protected:
	vector<Menuitem> menuitems;
public:
	Menumanager(string filename);
	//��ʾ�˵�
	void displayMenu();
	//��ò�Ʒ
	vector<Menuitem>& getMenu();
};