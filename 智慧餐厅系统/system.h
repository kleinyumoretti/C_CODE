#pragma once
#include "system.h"
#include "user.h"
#include "customer.h"
#include "waiter.h"
#include "chef.h"
#include <fstream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;
class System
{
public:
	//系统主菜单
	void systemMenu();
	//登录
	void systemLogin(int select);
	//离开
	void systemExit();
};