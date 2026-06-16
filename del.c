#include <stdio.h>
#include "stu.h"
void del(stu *st)
{
    printf("老大，我们杀谁\n");
    int tar;
    scanf("%d", &tar);
    for (int i = 0; i < N; i++)
    {
        if (st[i].id == tar)
        {
            int ch = i;
            while (++i < N && st[i].id != 0)
            {
            }
            i--;
            st[ch] = st[i];
            st[i].id = 0;
            return;
        }
    }
    printf("没有找到目标喵\n");
}