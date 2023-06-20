#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    srand(time(NULL));
    int number=0,coin=0,reverse=0,obverse=0;
    printf("How many times do you want to simulate:");
    scanf("%d",&number);
    for(int i=0;i<number;i++)
    {   
        coin=rand()%2;
        printf("%d",coin);
        if(coin==1)
        obverse++;
        else
        {
            reverse++;
        }
        
    }
    printf("\n");
    printf("heads: %d times\n",obverse);
    printf("tails: %d times",reverse);
    return 0;
}