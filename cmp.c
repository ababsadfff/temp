#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
bool cmp1(stu a, stu b)
{
    return a.id < b.id;
}
bool cmp2(stu a, stu b)
{
    return b.id < a.id;
}