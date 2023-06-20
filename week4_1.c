#include<stdio.h>
int main(void)
{
int number=0,i=0,sequence,sum=0;
float average=0.0;
scanf("%d",&number);
for(i=0;i<number;i++)
{
    scanf("%d",&sequence);
    sum=sum+sequence;
}
    average=(float)sum/number;
    printf("sum:%d,average:%f",sum,average);
    return 0;
}