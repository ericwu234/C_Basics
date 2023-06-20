#include<stdio.h>
int main()
{
    int round,n,flag=-1;
    scanf("%d",&round);
    char a[3],b[3];
    for(int i=0;i<round;i++)
    {
        scanf("%s %s %d",&a,&b,&n);
        int arr[n*n],h,t;
        for(int j=0;j<n*n;j++)
        {
            scanf("%d",&arr[j]);
        }
        h=0;
        t=n*n-1;
        for(int k=0;k<n*n/2;k++)
        {
            if(arr[h]!=arr[n*n-1])
                flag=0;
            else
                flag=1;
            h++;
            t--;
        }
        if(flag==1)
            printf("Test #%d:Symmetric.\n",i+1);
        else
            printf("Test #%d:Non-symmetric.\n",i+1);
    }
}