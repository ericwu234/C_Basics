#include <stdio.h>
int product(int n_1[][10], int n_2[][2], int size);
int main(void)
{
    int n_1[2][10] = {0}, n_2[10][2] = {0}, size = 0;
    printf("Please enter the size:");
    scanf("%d", &size);
    printf("enter Matrix_1:");
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &n_1[j][i]);
        }
    }
    printf("enter Matrix_2:");
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            scanf("%d", &n_2[j][i]);
        }
    }
    product(n_1, n_2, size);
    return 0;
}
int product(int n_1[][10], int n_2[][2], int size)
{
    int ans[2][2] = {0};
    for (int k = 0; k < 2; k++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int i = 0; i < size; i++)
            {

                ans[k][j] = ans[k][j] + n_1[k][i] * n_2[i][j];
            }
        }
    }
    printf("[");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", ans[i][j]);
            if (j == 0)
            {
                printf("  ");
            }
        }
        if (i == 0)
        {
            printf("\n ");
        }
    }
    printf("]");
}