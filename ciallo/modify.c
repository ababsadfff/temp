#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "stu.h"

void modify(stu *stu_node, ll n)
{
    if (n < 0 || n >= N || stu_node[n].id == 0)
    {
        printf("目标学生不存在\n");
        return;
    }

    ll id;
    printf("请输入新学号:\n");
    if (scanf("%lld", &id) != 1)
    {
        printf("输入错误\n");
        return;
    }

    if (id <= 0)
    {
        printf("学号必须大于0\n");
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (i != n && stu_node[i].id == id)
        {
            printf("该学号已被占用\n");
            return;
        }
    }

    strcpy(stu_node[n].name, "");
    strcpy(stu_node[n].major, "");

    stu_node[n].id = id;

    printf("请输入姓名:\n");
    scanf("%14s", stu_node[n].name);

    printf("请输入专业:\n");
    scanf("%14s", stu_node[n].major);

    int sum = 0;
    for (int x = 0; x < M; x++)
    {
        printf("请输入第 %d 门成绩:\n", x + 1);
        scanf("%d", &stu_node[n].score[x]);
        sum += stu_node[n].score[x];
    }
    stu_node[n].sum = sum;
}