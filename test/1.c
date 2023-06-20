#include<stdio.h>

int main(){
    unsigned long long in=0,m;
    int a[100]={0};
    int i=0;
    int k=1;
    while (scanf("%llu",&in)!=EOF)
    {
        i=0;
    //scanf("%llu",&in);
    if(in>999999999999999)
    {
        break;
    }
    m=in;
    while(m>0)
    {
        
        if(i%4==1)
        {
            a[i]=m%10;
            m=m/10;
        }
        else
        {
            a[i]=m%100;
            m=m/100;
        }
        i++;
    }
    /*for(int j=0;j<50;j++)
    {
        printf("%d ",a[j]);
    }*/
    printf("%d. ",k);
    for(int j=i-1;j>=0;j--)
    {
        if(a[j]!=0)
        {
        if(j==0)
        {
            printf("%d",a[j]);
            break;
        }
        
        if(j%4==0)
        {
            printf("%d kuti ",a[j]);
        }
        if(j%4==1)
        {
            printf("%d shata ",a[j]);
        }
        if(j%4==2)
        {
            printf("%d hajar ",a[j]);
        }
        if(j%4==3)
        {
            printf("%d lakh ",a[j]);
        }
        }
    }
    printf("\n");
    k++;
    }
}