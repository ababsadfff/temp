#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
void range(stu *st)
{
    int l, r;
    printf("请输入查询区间[l,r],以空格分割\n");
    scanf("%d %d", &l, &r);
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (st[i].id)
        {
            if (st[i].sum >= l && st[i].sum <= r)
            {
                cnt++;
                printf("%lld ", st[i].id);
            }
        }
    }
    printf("\n");
    printf("区间[%d,%d]内,共%d名学生\n", l, r, cnt);
}