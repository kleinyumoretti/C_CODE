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
	//ϵͳ���˵�
	void systemMenu();
	//��¼
	void systemLogin(int select);
	//�뿪
	void systemExit();
};