#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
#include <string.h>
void write_to_file(const stu *stu_node)
{
    FILE *fp = fopen("students.dat", "wb");
    if (fp == NULL)
    {
        printf("无法创建 students.dat ！\n");
        return;
    }

    int written = 0;
    for (int i = 0; i < N; i++)
    {
        if (stu_node[i].id != 0)
        {
            fwrite(&stu_node[i], sizeof(stu), 1, fp);
            written++;
        }
    }

    fclose(fp);
    printf("成功写入\n");
}