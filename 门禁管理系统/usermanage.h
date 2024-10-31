#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "物业管理系统.h"
#include "usermanagementsystem.h"
int read_user_file(const char* file_path, owner *user);
void save_users_to_file(const owner* users, int count, const char* file_path);
void add_user(owner* users, int* user_count);
void delete_user(owner* users, int* user_count);
void modify_user(owner* users, int user_count);
void view_user(owner* users, int user_count);