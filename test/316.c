#include <stdio.h>
int re(int n)
{
    int reverse = 0;
    while (n % 10 != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse;
}
int check_prime(int n)
{
    int flag = 1;
    for (int i = 2; i < n/2; i++)
    {
        if (n % i == 0)
        {
            flag = 0; //no
            break;
        }
    }
    return flag;
}
int main()
{
    int n = 0, reverse = 0;
    while (scanf("%d", &n) != EOF)
    {

        if (check_prime(n) == 0)
            printf("%d is not prime.\n", n);
        if (check_prime(n) == 1)
        {
            if (check_prime(re(n)) == 1)
                printf("%d is emirp.\n", n);
            else
                printf("%d is prime.\n", n);
        }
    }
}