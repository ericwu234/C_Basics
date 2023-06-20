#include<stdio.h>

int main (void)
{
    int n=0,j=0,a=-1,k=1,pi=0;
    float m=0.0;
    
    printf("pi=4-4/3+4/5-4/7+...\n");
    printf("Please enter the number of terms:\n");
    scanf("%d",&n);
    while(k<=n)
    {
        
        a=-1*a;
        m=a*(4/(2*k-1));
        pi=pi+m;
        k=k+1;
        
    }
    
    printf("pi= %f",pi);
   return 0;
}