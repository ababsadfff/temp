#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
#include <string.h>
void input(stu *stu_node, int n)
{
    while (n--)
    {
        int i = 0;
        for (; i < N; i++)
        {
            if (stu_node[i].id == 0)
                break;
        }
        if (i == N)
        {
            printf("学生数组已满，无法继续添加！\n");
            return;
        }
        printf("请输入学生ID：");
        ll id;
        scanf("%lld", &id);
        for (int now = 0; now < N; now++)
        {
            if (stu_node[now].id == id)
            {
                printf("该ID已被占用，添加操作中止！\n");
                return;
            }
        }
        stu_node[i].id = id;

        printf("请输入姓名：");
        scanf("%s", stu_node[i].name);

        printf("请输入专业：");
        scanf("%s", stu_node[i].major);

        printf("请输入%d门课的成绩（用空格或回车分隔）：", M);
        int sum = 0;
        for (int x = 0; x < M; x++)
        {
            scanf("%d", &stu_node[i].score[x]);
            sum += stu_node[i].score[x];
        }
        stu_node[i].sum = sum;
    }
}