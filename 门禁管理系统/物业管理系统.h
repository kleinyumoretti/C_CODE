#pragma once

typedef struct {
    int door_id;            // ���ţ�01, 02������
    char building;          // ¥�ţ�A, B��
    int floordoor;          // ��Ԫ�ţ�202, 101��
} door;


typedef struct {
    char name[255];          // ����
    door  ownerfoor;   // סַ�ṹ��
    char keycard[255];      // �Ž���
} owner;