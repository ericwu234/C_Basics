#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int one(int n[], int sum);
int main(void)
{
    int dise_1 = 0, dise_2 = 0, sum = 0, n[11] = {0}, n_2[6][6] = {0};

    srand(time(NULL));
    for (int i = 0; i < 36000; i++)
    {
        dise_1 = rand() % 6 + 1;
        dise_2 = rand() % 6 + 1;
        sum = dise_1 + dise_2;
        one(n, sum);
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("%d:%d, ", i + 2, n[i]);
    }
    return 0;
}
int one(int n[], int sum)
{
    for (int i = 0; i <= 10; i++)
    {
        if (sum == i + 2)
        {
            n[i] = n[i] + 1;
            break;
        }
    }
}
