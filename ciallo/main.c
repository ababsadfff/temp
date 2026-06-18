#include <stdio.h>
#include <stdbool.h>
#include "stu.h"
#include "del.c"
#include "input.c"
#include "output.c"
#include "search.c"

#define cmp1 cmp1_sort_na
#define swap swap_sort_na
#define cal cal_sort_na
#define sort_d sort_na
#include "sort_na.c"
#undef cmp1
#undef swap
#undef cal
#undef sort_d

#define cmp1 cmp1_sort_nd
#define swap swap_sort_nd
#define cal cal_sort_nd
#define sort_d sort_nd
#include "sort_nd.c"
#undef cmp1
#undef swap
#undef cal
#undef sort_d

#define cmp1 cmp1_sort_sa
#define swap swap_sort_sa
#define cal cal_sort_sa
#define sort_d sort_sa
#include "sort_sa.c"
#undef cmp1
#undef swap
#undef cal
#undef sort_d

#define cmp1 cmp1_sort_sd
#define swap swap_sort_sd
#define cal cal_sort_sd
#define sort_d sort_sd
#include "sort_sd.c"
#undef cmp1
#undef swap
#undef cal
#undef sort_d

#define print printf
#include "modify.c"
#undef print

stu stu_arr[N];

#include "read_from_file.c"
#include "write_to_file.c"
#include "range_qur.c"
#undef N
#include <windows.h>
signed main()
{
    system("chcp 65001");
    char cwd[MAX_PATH];
    GetCurrentDirectoryA(MAX_PATH, cwd);
    printf("当前工作目录为%s\n", cwd);

#define N 100
    int choice;
    while (true)
    {
        printf("--------------------------------------------------\n");
        printf("请输入操作编号\n1: 添加\n2: 删除\n3: 修改\n4: 查找\n5: 输出\n6: 按学号升序排序\n7: 按学号降序排序\n8: 按总分升序排序\n9: 按总分降序排序\n0: 退出\n10: 读取文件\n11: 写入文件\n12: 按区间查询成绩\n0: 退出程序\n");
        if (scanf("%d", &choice) != 1)
        {
            break;
        }

        if (choice == 0)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            input(stu_arr, 1);
            break;
        case 2:
            del(stu_arr);
            break;
        case 3:
        {
            ll id;
            printf("请输入要修改的学号:\n");
            if (scanf("%lld", &id) != 1)
            {
                break;
            }
            int idx = -1;
            for (int i = 0; i < N; i++)
            {
                if (stu_arr[i].id == id)
                {
                    idx = i;
                    break;
                }
            }
            if (idx >= 0)
            {
                modify(stu_arr, idx);
            }
            else
            {
                printf("未找到该学号\n");
            }
        }
        break;
        case 4:
        {
            ll id;
            printf("请输入要查找的学号:\n");
            if (scanf("%lld", &id) != 1)
            {
                break;
            }
            search(stu_arr, id);
        }
        break;
        case 5:
            output(stu_arr);
            break;
        case 6:
            sort_na(stu_arr);
            break;
        case 7:
            sort_nd(stu_arr);
            break;
        case 8:
            sort_sa(stu_arr);
            break;
        case 9:
            sort_sd(stu_arr);
            break;
        case 10:
            read_from_file(stu_arr);
            break;
        case 11:
            write_to_file(stu_arr);
            break;
        case 12:
            range(stu_arr);
            break;
        default:
            printf("输入错误\n");
            break;
        }
    }

    return 0;
}