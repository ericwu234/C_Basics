#include <stdio.h>
#define size 10
int selection(int n[]);
int main(void)
{
    int n[size] = {0};
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &n[i]);
    }
    selection(n);
    return 0;
}
int selection(int n[])
{
    int tmp;
    for (int j = 0; j < size; j++)
    {
        for (int i = j; i < size; i++)
        {
            if (n[i] <= n[j])
            {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", n[i]);
    }
}