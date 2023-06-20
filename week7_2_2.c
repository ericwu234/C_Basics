#include <stdio.h>
int main(void)
{
    int lcm = 0, number_1 = 0, num = 0, number_2 = 0, i = 0;
    printf("enter two numbers:\n");
    scanf("%d %d", &number_1, &number_2);
    if (number_2 > number_1)
    {
        num = number_2;
        number_2 = number_1;
        number_1 = num;
    }
    i = number_1;
    while (i % number_1 != 0 || i % number_2 != 0)
    {
        i++;
    }
    lcm = i;
    printf("LCM=%d", lcm);
}