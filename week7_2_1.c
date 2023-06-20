#include <stdio.h>
int Perfect(int range);
int perfect_gcd(int sum);
int main(void)
{
    int range = 0;
    printf("enter the maximum range of perfect numbers:");
    scanf("%d", &range);
    printf("perfect number:\n");
    Perfect(range);
    return 0;
}
int Perfect(int range)
{
    int sum = 0, k = 0;
    for (int i = 0; i < range; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i && sum != 0)
        {
            printf("%d=1", sum);
            perfect_gcd(sum);
            printf("\n");
        }
        sum = 0;
    }
}
int perfect_gcd(int sum)
{
    for (int i = 2; i < sum; i++)
    {
        if (sum % i == 0)
        {
            printf("+%d", i);
        }
    }
}