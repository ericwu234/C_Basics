#include<stdio.h>

int main(void)
{
    int hour=0;
    float rate=0.00,salary=0.00;
    while(hour!=-1)
    {
        printf("Enter # of hours worked(-1 to end):");
        scanf("%d",&hour);
        if(hour!=-1)
        {
            printf("Enter hourly rate of the worker($00.00):");
            scanf("%f",&rate);
        if(hour<=40)
        {
            salary=rate*hour;
        }
        else
        {
            salary=(hour-40)*0.50*rate+hour*rate;
         }
        printf("%.2f\n",salary);
        }
}
    return 0;
}