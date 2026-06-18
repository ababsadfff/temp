#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
bool cmp1(stu a, stu b)
{
    return a.id > b.id;
}
void swap(stu *a, stu *b)
{
    stu tem = *a;
    *a = *b;
    *b = tem;
    return;
};
int cal(stu *st)
{
    int i = 0;
    for (; i < N && st[i].id; i++)
    {
    }
    return i;
}
void sort_d(stu *st)
{
    int lim = cal(st);
    if (lim == 1 || lim == 0)
    {
        return;
    }
    for (int x = 0; x < lim; x++)
    {
        for (int i = 0; i < lim - 1; i++)
        {
            if (cmp1(st[i], st[i + 1]))
            {
                swap(&st[i], &st[i + 1]);
            }
        }
    }
    return;
}
