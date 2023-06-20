#include <stdio.h>

int fun(int num);
int main(void)
{
    int num = 0, num_1 = 0, t = 0, times = 0;

    scanf("%d", &t);
    int n[1000] = {0};
    for (int j = 0; j < t; j++)
    {
        scanf("%d", &num);
        n[j] = num;
    }
    for (int j = 0; j < t; j++)
    {

        num = n[j];
        times = 0;
        for (int i = 0; i < 1000; i++)
        {

            num_1 = fun(num);
            if (num == num_1)
            {
                break;
            }
            num = num + num_1;
            times++;
        }
        printf("%d ", times);
        printf("%d\n", num);
    }
}
int fun(int num)
{
    int num_1 = 0;
    while (num != 0)
    {
        num_1 = num_1 * 10 + num % 10;
        num = num / 10;
    }
    return num_1;
}