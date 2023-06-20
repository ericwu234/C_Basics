#include <stdio.h>
#include<stdlib.h>
typedef struct student_info
{
    int id;
    float math_score, chinese_score;
} tstudent_info;
int main(void)
{
    tstudent_info *pstudent;
    int n=0;
    scanf("%d",&n);
    pstudent=(tstudent_info*)malloc(sizeof(tstudent_info)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&(pstudent+i)->id);
        scanf("%f",&(pstudent+i)->math_score);
        scanf("%f",&(pstudent+i)->chinese_score);
    }
    for(int i=0;i<n;i++)
    {
        printf("ID:%d ",(pstudent+i)->id);
        printf("Math:%g ",(pstudent+i)->math_score);
        printf("Chinese:%g\n",(pstudent+i)->chinese_score);
    }
    return 0;
}