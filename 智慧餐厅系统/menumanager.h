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
	//显示菜单
	void displayMenu();
	//获得菜品
	vector<Menuitem>& getMenu();
};