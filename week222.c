#include<stdio.h>
int main(void)
{
int a,b,c,sum,average,product,smallest,largest ;
    printf("Enter three different integers:");
    scanf("%d %d %d",& a,& b,& c);
    sum=a+b+c;
    average=(a+b+c)/3;
    product=a*b*c;
    smallest=a;
    if(b<smallest)
    smallest=b;
    else
    {
        largest=b;
    }
    
    if(c<smallest)
    smallest=c;
    else
    {
        largest=c;
    }
    if(a>c && a>b)
    largest=a;
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",average);
    printf("Product is %d\n",product);
    printf("Smallest is %d\n",smallest);
    printf("Largest is %d\n",largest);
    return 0;
}