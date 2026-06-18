#include <stdio.h>
#include "stu.h"
void del(stu *st)
{
    printf("老大，我们杀谁\n");
    ll tar;
    scanf("%lld", &tar);

    for (int i = 0; i < N; i++)
    {
        if (st[i].id == tar)
        {
            int next = i + 1;
            int curr = i;
            while (next < N)
            {
                if (st[next].id != 0)
                {
                    st[curr] = st[next];
                    curr++;
                }
                next++;
            }
            for (int k = curr; k < N; k++)
                st[k].id = 0;

            printf("删除成功！\n");
            return;
        }
    }

    printf("没有找到目标喵\n");
}