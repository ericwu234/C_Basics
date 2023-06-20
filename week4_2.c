#include <stdio.h>

int main(void)
{
    int i = 0, sum = 0, end = 0, sum_2 = 0, sum_3 = 0;
    scanf("%d", &end);
    for (i = 0; i < end; i++)
    {
        sum = sum + (i + 1);
        sum_2 = sum_2 + (i + 1) * (i + 1);
        sum_3 = sum_3 + (i + 1) * (i + 1) * (i + 1);
    }
    printf("sum:%d\nsum of squares:%d\nsum of cubes:%d", sum, sum_2, sum_3);
    return 0;
}