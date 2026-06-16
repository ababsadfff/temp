#include <stdio.h>
#include "stu.h"
void output(stu *stu_node)
{
    for (int i = 0; i < N; i++)
    {
        if (stu_node[i].id != 0)
        {
            printf("id:%d\n name:%s\n major:%s\n", stu_node[i].id, stu_node[i].name, stu_node[i].major);
            for (int x = 0; x < M; x++)
            {
                printf("%d ", stu_node[i].score[x]);
            }
            printf("\n");
            printf("sum:%d\n", stu_node[i].sum);
        }
    }
}