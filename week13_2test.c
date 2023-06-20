#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
//float fswap(float *a, float *b);
typedef struct student_info
{
    int id;
    int math_score, chinese_score;
} tstudent_info;
int main(void)
{
    tstudent_info *pstudent;
    int n = 0, *tmp;
    scanf("%d", &n);
    pstudent = (tstudent_info *)malloc(sizeof(tstudent_info) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(pstudent + i)->id);
        scanf("%d", &(pstudent + i)->math_score);
        scanf("%d", &(pstudent + i)->chinese_score);
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if ((pstudent + i)->math_score < (pstudent + i + 1)->math_score)
            {

                swap(&(pstudent + i)->id, &(pstudent + i + 1)->id);
                swap(&(pstudent + i)->math_score, &(pstudent + i + 1)->math_score);
                swap(&(pstudent + i)->chinese_score, &(pstudent + i + 1)->chinese_score);
                continue;
            }
            if ((pstudent + i)->math_score == (pstudent + i + 1)->math_score)
            {
                if ((pstudent + i)->chinese_score < (pstudent + i + 1)->chinese_score)
                {
                    swap(&(pstudent + i)->id, &(pstudent + i + 1)->id);
                    swap(&(pstudent + i)->math_score, &(pstudent + i + 1)->math_score);
                    swap(&(pstudent + i)->chinese_score, &(pstudent + i + 1)->chinese_score);
                    continue;
                }
                if ((pstudent + i)->chinese_score == (pstudent + i + 1)->chinese_score)
                {
                    if ((pstudent + i)->id < (pstudent + i + 1)->id)
                    {
                        swap(&(pstudent + i)->id, &(pstudent + i + 1)->id);
                        swap(&(pstudent + i)->math_score, &(pstudent + i + 1)->math_score);
                        swap(&(pstudent + i)->chinese_score, &(pstudent + i + 1)->chinese_score);
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("ID:%d ", (pstudent + i)->id);
        printf("Math:%d ", (pstudent + i)->math_score);
        printf("Chinese:%d\n", (pstudent + i)->chinese_score);
    }
    return 0;
}

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*float fswap(float *a, float *b)
{
    float *tmp;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
}*/