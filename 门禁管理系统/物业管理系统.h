#pragma once

typedef struct {
    int door_id;            // 大门（01, 02……）
    char building;          // 楼门（A, B）
    int floordoor;          // 单元门（202, 101）
} door;


typedef struct {
    char name[255];          // 姓名
    door  ownerfoor;   // 住址结构体
    char keycard[255];      // 门禁卡
} owner;