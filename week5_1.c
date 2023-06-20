#include <stdio.h>
int main(void)
{
    int i = 0, max = 0, j = 0, k = 0;
    while (max % 2 == 0)
    {
        printf("please enter odd:");
        scanf("%d", &max);
    }
    k = (max - 1) / 2;
    for (i = 0; i < max; i = i + 2, k--)
    {
        for (j = 0; j < k; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("*\n");
    }
    k = 1;
    for (i = (max - 3); i >= 0; i = i - 2, k++)
    {
        for (j = 0; j < k; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}