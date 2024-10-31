#define _CRT_SECURE_NO_WARNINGS
#include "usermanagementsystem.h"
// �궨��
#define TITLE "�Ž�����ϵͳ"
#define AUTHOR "����: �ϻ�ͷ"
#define NR(x) (sizeof(x) / sizeof(x[0]))
#define MAX_LINE_LENGTH 256
#define MAX_USERS 200


 owner user[201];
 int count=0;

// ö�����Ͷ���
enum { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ENTER = 13, ESC = 27 };




// �����Ϣ
CONSOLE_CURSOR_INFO cci;
COORD pos;

//��ȡ�ļ�



void Usermanagementsystem()
{
	// �˵���
	char* menu[] = {
		"1. ����û�","2. ɾ���û�","3. �޸��û���Ϣ","4. �鿴�û���Ϣ","5. ��ʾȫ���û���Ϣ","6. �˳�"
	};
	int index = 0; // ��ǰѡ�еĲ˵�������
	HANDLE hOut;   // ����̨������
	SetConsoleTitleA(TITLE); // ���ÿ���̨����

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(hOut, &cci); // ��ȡ�����Ϣ
	cci.dwSize = 1; // ���ù���С
	cci.bVisible = 0; // ���ع��
	SetConsoleCursorInfo(hOut, &cci); // Ӧ�ù������

	while (1) {

		

		showmenu(hOut, menu, NR(menu), index); // ��ʾ�˵�
		int ret = get_userinput(&index, NR(menu)); // ��ȡ�û�����

		if (ret == ESC) break; // ���� ESC ���˳�

		if (ret == ENTER) {
			count=read_user_file("user.txt",user,count);
			switch (index) { // ���ݵ�ǰѡ�еĲ˵���ִ����Ӧ����
			case 0:
				add_user(user,&count);
				break; // ����û�
			case 1:
				delete_user(user, &count);
				break; // ɾ���û�
			case 2:
				modify_user(user, count);
				break; // �޸��û�
			case 3:
				view_user(user, count);
				break; // �鿴�û���
			case 4:

				for (int i = 0; i < count; i++)
				{
					printf("\n����: %s, ����: %02d, ¥��: %c, ��Ԫ��: %d, �Ž���: %s",
						user[i].name,
						user[i].ownerfoor.door_id,
						user[i].ownerfoor.building,
						user[i].ownerfoor.floordoor,
						user[i].keycard);
				}
				printf("\n");
				
				break; // ��ʾȫ��
			case 5:
				return; // �˳�
			}

			save_users_to_file(user, count, "user.txt");
			system("pause");
		}
		//
	}
	return 0;
}


//�鿴���ż�¼
void print_open_time(const char* filename) {
	FILE* file = fopen(filename, "r");
	if (file == NULL) {
		perror("�޷����ļ�");
		return;
	}
	printf("\n");
	char line[256]; // ����ÿ�����256���ַ�
	while (fgets(line, sizeof(line), file)) {
		printf("%s", line);
	}

	fclose(file);
}