#include <stdio.h>
#include "stu.h"
void input(stu *stu_node, int n)
{
    while (n--)
    {
        int i = 0;
        for (; i < N; i++)
        {
            if (stu_node[i].id == 0)
            {
                break;
            }
        }
        if (i == N)
        {
            printf("这里站不下那么多人\n");
            return;
        }
        printf("id\n");
        int id;
        scanf("%d", &id);
        for (int now = 0; now < N; now++)
        {
            if (stu_node[now].id == id)
            {
                printf("该id已被占用，add程序即将退出\n");
                return;
            }
        }
        stu_node[i].id = id;
        printf("name\n");
        scanf("%s", stu_node[i].name);
        printf("major");
        scanf("%s", stu_node[i].major);
        printf("score\n");
        int sum = 0;
        for (int x = 0; x < M; x++)
        {
            scanf("%d", &stu_node[i].score[x]);
            sum += stu_node[i].score[x];
        }
        stu_node[i].sum = sum;
    }
}