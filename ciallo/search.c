#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
void search(stu *stu_node, ll pos)
{
    if (pos <= 0)
    {
        printf("学号不正确\n");
    }
    for (int i = 0; i < N; i++)
    {
        if (stu_node[i].id == pos)
        {
            show(stu_node[i]);
            return;
        }
    }
    printf("好像没有这个家伙\n");
};