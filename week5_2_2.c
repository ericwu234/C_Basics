#include <stdio.h>
int main(void)
{
    int number = 0, i = 0, j = 0, k = 0;
    printf("Please enter a number:");
    scanf("%d", &number);
    for (i = 0, k = number; i < (number + 1) / 2; i++, k = k - 2)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = (number%2*-1)+1, k = (number - 1) / 2; i < number; i = i + 2, k--)
    {
        for (j = 0; j < k; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}