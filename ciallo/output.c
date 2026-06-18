#include <stdio.h>
#include "stu.h"
void output(stu *stu_node)
{
    for (int i = 0; i < N; i++)
    {
        if (stu_node[i].id != 0)
        {
            printf("---------- 学生信息 ----------\n");
            printf("ID：%lld\n", stu_node[i].id);
            printf("姓名：%s\n", stu_node[i].name);
            printf("专业：%s\n", stu_node[i].major);
            printf("成绩：");
            for (int x = 0; x < M; x++)
            {
                printf("%d ", stu_node[i].score[x]);
            }
            printf("\n总分：%d\n", stu_node[i].sum);
            printf("------------------------------\n\n");
        }
    }
}