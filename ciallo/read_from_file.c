#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
#include <string.h>
int read_from_file(stu *stu_node)
{
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL)
    {
        printf("students.dat 不存在或无法打开！\n");
        return 0;
    }

    int count = 0;
    stu temp;

    // 一次读取一个 stu 大小的数据，直到 fread 返回 0（文件末尾）
    while (fread(&temp, sizeof(stu), 1, fp) == 1)
    {
        // 只接受 id > 0 的有效记录

        if (temp.id <= 0)
        {
            printf("警告：文件中有无效记录（id=%lld），已跳过。\n", temp.id);
            continue;
        }
        for (int i = 0; i < N; i++)
        {
            if (stu_node[i].id == temp.id)
            {
                printf("ID:%lld 重复录入，已跳过\n", temp.id);
                continue;
            }
        }
        // 找空位
        int slot = -1;
        for (int i = 0; i < N; i++)
        {
            if (stu_node[i].id == 0ll)
            {
                slot = i;
                break;
            }
        }
        if (slot == -1)
        {
            printf("数组已满停止读取剩余数据。\n");
            break;
        }

        stu_node[slot] = temp; // 整体赋值
        count++;
    }

    fclose(fp);
    printf("成功从 students.dat 读取。\n");
    return count;
}