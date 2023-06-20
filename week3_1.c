#include<stdio.h>

int main(void)
{
    int grade=0,pass=0,fail=0;
    float ratio=0.0;
    while(grade !=-1)
    {
    printf("Please enter a grade: ");
    scanf("%d",&grade);
    if(grade>=60)
    {
        pass=pass+1;
    }
    else if(grade!=-1)
    {
        fail=fail+1;
    }
}
    ratio=(float)pass/(pass+fail);
    printf("The passed ratio is %f",ratio);
    return 0;
}