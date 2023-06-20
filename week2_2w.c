#include<stdio.h>
int main(void)
{
int integer_1,integer_2,integer_3,sum,average,product,smallest,largest ;
    printf("Enter three different integers:");
    scanf("%d %d %d",& integer_1,& integer_2,& integer_3);
    sum=integer_1+integer_2+integer_3;
    average=(integer_1+integer_2+integer_3)/3;
    product=integer_1*integer_2*integer_3;
    if(integer_1>integer_2 && integer_1>integer_3)
      {
        largest=integer_1;
    }
    if(integer_2>integer_1 && integer_2>integer_3)
      {
        largest=integer_2;
    }
    if(integer_3>integer_2 && integer_3>integer_1)
      {
        largest=integer_3;
    }
    if(integer_1<integer_2 && integer_1<integer_3)
      {
        smallest=integer_1;
    }
    if(integer_2<integer_1 && integer_2<integer_3)
      {
        smallest=integer_2;
    }
    if(integer_3<integer_1 && integer_3<integer_2)
      {
        smallest=integer_3;
    }
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",average);
    printf("Product is %d\n",product);
    printf("Smallest is %d\n",smallest);
    printf("Largest is %d\n",largest);
    return 0;
}