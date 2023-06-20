#include <stdio.h>
#include <stdlib.h>
typedef struct student_info
{
    int id;
    float math_score, chinese_score;
} tstudent_info;
void sort(tstudent_info *pstudent, int n);
void swap(tstudent_info *a, tstudent_info *b);
void change(tstudent_info *pstudent, int n);
int main(void)
{
    tstudent_info *pstudent;
    int n = 0, way;
    printf("Please enter how many data do you want to enter:\n");
    scanf("%d", &n);
    printf("Enter the data:(1)id: (2)math score: (3)chinese score:\n");
    pstudent = (tstudent_info *)malloc(sizeof(tstudent_info) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(pstudent + i)->id);
        scanf("%f", &(pstudent + i)->math_score);
        scanf("%f", &(pstudent + i)->chinese_score);
        for (int j = 0; j < i; j++)
        {
            if ((pstudent + i)->id == (pstudent + j)->id)
            {
                printf("This id has been used!\nPlease enter again:\n");
                scanf("%d", &(pstudent + i)->id);
                scanf("%f", &(pstudent + i)->math_score);
                scanf("%f", &(pstudent + i)->chinese_score);
            }
        }
    }
    printf("Please chose the way you want to sort:\n(1)High to low(2)Low to high\n");
    scanf("%d", &way);
    sort(pstudent, n);
    if (way == 2)
    {
        change(pstudent, n);
    }
    for (int i = 0; i < n; i++)
    {
        printf("ID:%d ", (pstudent + i)->id);
        printf("Math:%g ", (pstudent + i)->math_score);
        printf("Chinese:%g\n", (pstudent + i)->chinese_score);
    }
    return 0;
}
void sort(tstudent_info *pstudent, int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if ((pstudent + i)->math_score < (pstudent + i + 1)->math_score)
            {
                swap((pstudent + i), (pstudent + i + 1));
                continue;
            }
            if ((pstudent + i)->math_score == (pstudent + i + 1)->math_score)
            {
                if ((pstudent + i)->chinese_score < (pstudent + i + 1)->chinese_score)
                {
                    swap((pstudent + i), (pstudent + i + 1));
                    continue;
                }
                if ((pstudent + i)->chinese_score == (pstudent + i + 1)->chinese_score)
                {
                    if ((pstudent + i)->id < (pstudent + i + 1)->id)
                    {
                        swap((pstudent + i), (pstudent + i + 1));
                    }
                }
            }
        }
    }
}
void swap(tstudent_info *a, tstudent_info *b)
{
    tstudent_info tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void change(tstudent_info *pstudent, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap((pstudent + i), (pstudent + n - 1 - i));
    }
}