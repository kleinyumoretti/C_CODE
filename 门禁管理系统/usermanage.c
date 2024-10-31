#include "usermanage.h"
#define MAX_LINE_LENGTH 256
#define MAX_USERS 200

//�����ļ�
int read_user_file(const char* file_path,owner *user) {
	int count = 0;
	FILE* file = fopen(file_path, "r");
	if (file == NULL) {
		perror("�޷����ļ�");
		return;
	}

	char buffer[MAX_LINE_LENGTH];

	while (fgets(buffer, sizeof(buffer), file) != NULL && count < MAX_USERS) {
		// ȥ�����з�
		buffer[strcspn(buffer, "\n")] = '\0';

		// �����ַ���
		sscanf(buffer, "%[^,],%d,%c,%d,%[^,]",
			user[count].name,
			&user[count].ownerfoor.door_id,
			&user[count].ownerfoor.building,
			&user[count].ownerfoor.floordoor,
			user[count].keycard);

		count++;
	}

	fclose(file);
	return count;
}

//�����ļ�
void save_users_to_file(const owner* users, int count, const char* file_path) {
	FILE* file = fopen(file_path, "w");  // �Ը��ǵķ�ʽ���ļ�
	if (file == NULL) {
		perror("�޷����ļ�");
		return;
	}

	for (int i = 0; i < count; i++) {
		fprintf(file, "%s,%d,%c,%d,%s\n",
			users[i].name,
			users[i].ownerfoor.door_id,
			users[i].ownerfoor.building,
			users[i].ownerfoor.floordoor,
			users[i].keycard);
	}

	fclose(file);
}


//����û�
void add_user(owner* users, int* user_count) {
	if (*user_count > MAX_USERS) {
		printf("�û������Ѵﵽ���ޡ�\n");
		return ; // �û������ﵽ����
	}

	owner new_user;

	// �����û���Ϣ
	printf("\n����������: ");
	fgets(new_user.name, sizeof(new_user.name), stdin);
	new_user.name[strcspn(new_user.name, "\n")] = '\0'; // ȥ�����з�

	printf("��������ű��: (01/02)");
	scanf("%d", &new_user.ownerfoor.door_id);
	getchar(); // �����з�

	printf("������¥�ţ�A/B��: ");
	scanf("%c", &new_user.ownerfoor.building);
	getchar(); // �����з�

	printf("�����뵥Ԫ��: ");
	scanf("%d", &new_user.ownerfoor.floordoor);
	getchar(); // �����з�

	printf("�������Ž���: ");
	fgets(new_user.keycard, sizeof(new_user.keycard), stdin);
	new_user.keycard[strcspn(new_user.keycard, "\n")] = '\0'; // ȥ�����з�

	// �����û���ӵ�������
	users[*user_count] = new_user;
	(*user_count)++; // �����û�����

	return ; // ��ӳɹ�
}



void delete_user(owner* users, int* user_count) {
	char name[200];
	printf("\n��������ɾ���û�������");
	scanf("%s", name);
	for (int i = 0; i < *user_count; i++) {
		if (strcmp(users[i].name, name) == 0) {
			// �ҵ��û���ɾ���û�
			for (int j = i; j < *user_count - 1; j++) {
				users[j] = users[j + 1]; // �ƶ�������û�ǰ��
			}
			(*user_count)--; // �����û�����
			printf("ɾ���ɹ�������");
			return ; // ɾ���ɹ�
		}
	}
	printf("�û�δ�ҵ�������");
	return ; // �û�δ�ҵ�
}


void modify_user(owner* users, int user_count) {

	char name[200];
	printf("\n��������ɾ���û�������");
	scanf("%s", name);
	for (int i = 0; i < user_count; i++) {
		if (strcmp(users[i].name, name) == 0) {
			// ��ʾ��ǰ��Ϣ
			printf("\n��ǰסַ: %d %c %d\n", users[i].ownerfoor.door_id, users[i].ownerfoor.building, users[i].ownerfoor.floordoor);
			printf("��ǰ�Ž���: %s\n", users[i].keycard);

			char confirm;

			// ѯ���Ƿ��޸Ĵ���ID
			printf("�Ƿ��޸�סַ����ID? (��ǰֵ: %d) (y/n): ", users[i].ownerfoor.door_id);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("�������µ�סַ����ID: ");
				scanf("%d", &users[i].ownerfoor.door_id);
			}

			// ѯ���Ƿ��޸�¥��
			printf("�Ƿ��޸�¥��? (��ǰֵ: %c) (y/n): ", users[i].ownerfoor.building);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("�������µ�¥��: ");
				getchar(); // ������뻺��
				scanf("%c", &users[i].ownerfoor.building);
			}

			// ѯ���Ƿ��޸ĵ�Ԫ��
			printf("�Ƿ��޸ĵ�Ԫ��? (��ǰֵ: %d) (y/n): ", users[i].ownerfoor.floordoor);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("�������µĵ�Ԫ��: ");
				scanf("%d", &users[i].ownerfoor.floordoor);
			}

			// ѯ���Ƿ��޸��Ž���
			printf("�Ƿ��޸��Ž���? (��ǰֵ: %s) (y/n): ", users[i].keycard);
			getchar();
			scanf("%c", &confirm);
			if (confirm == 'y' || confirm == 'Y') {
				printf("�������µ��Ž���: ");
				getchar(); // ������뻺��
				fgets(users[i].keycard, sizeof(users[i].keycard), stdin);
				users[i].keycard[strcspn(users[i].keycard, "\n")] = '\0'; // ȥ�����з�
			}
			printf("�޸ĳɹ�������");
			return ; // �޸ĳɹ�
		}
	}
	printf("û�ҵ����û�������");
	return ; // �û�δ�ҵ�
}


void view_user(owner* users, int user_count) {
	char name[200];
	printf("\n����������ҵ��û�������");
	scanf("%s", name);

	for (int i = 0; i < user_count; i++) {
		if (strcmp(users[i].name, name) == 0) {
			printf("�û�����: %s\n", users[i].name);
			printf("סַ����ID: %d\n", users[i].ownerfoor.door_id);
			printf("¥��: %c\n", users[i].ownerfoor.building);
			printf("��Ԫ��: %d\n", users[i].ownerfoor.floordoor);
			printf("�Ž���: %s\n", users[i].keycard);
			return; // �ҵ��û��󷵻�
		}
	}
	printf("�û� %s δ�ҵ���\n", name);
}
