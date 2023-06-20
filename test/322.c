#include <stdio.h>
int main()
{
    long long int m = 0, n = 0, an = 0, sp[100000], flag = 1, i = 0;
    while (scanf("%lli %lli", &n, &m) != EOF)
    {
        if(m==0)
            printf("Boring!\n");
        else{
        an = 0, sp[1000], flag = 1, i = 0;
        for (i = 0; n != 1; i++)
        {
            if (n % m != 0)
            {
                flag = 0;
                printf("Boring!\n");
                break;
            }
            an = n / m;
            sp[i] = n;
            n = an;
        }
        if (flag == 1)
        {
            sp[i] = 1;
            for (long long int j = 0; j <= i; j++)
            {
                printf("%lli ", sp[j]);
                if(j==i)
                    printf("\n");
            }
        }}
    }
}