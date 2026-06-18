#ifndef STU_H
#define STU_H
#ifndef ll
#define ll long long
#define N 100
#define M 2
typedef struct student
{
    ll id;
    char name[15];
    char major[15];
    int score[M];
    int sum;
} stu;

void show(stu now)
{
    printf("学号：%lld\n", now.id);
    printf("姓名：%s\n", now.name);
    printf("专业：%s\n", now.major);
    printf("成绩：");
    for (int i = 0; i < M; i++)
    {
        printf("%d ", now.score[i]);
    }
    printf("\n总分：%d\n", now.sum);
}

#endif
#endif