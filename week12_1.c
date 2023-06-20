#include <stdio.h>
#include <stdlib.h>
#define size 2
void array_multiple(int *ptr_array1, int *ptr_array2, int *ptr_result, int n);
int main()
{
    int n = 0;
    int *ptr_array1, *ptr_array2, *ptr_result;
    printf("Enter n:");
    scanf("%d", &n);
    ptr_array1 = (int *)malloc(sizeof(int) * (n * size));
    ptr_array2 = (int *)malloc(sizeof(int) * (n * size));
    ptr_result = (int *)malloc(sizeof(int) * (size * size));
    for (int i = 0; i < size * size; i++)
    {
        *(ptr_result + i) = 0;
    }
    printf("Enter arrar1:");
    for (int i = 0; i < n * size; i++)
    {
        scanf("%d", &*(ptr_array1 + i));
    }

    printf("Enter arrar2:");
    for (int i = 0; i < n * size; i++)
    {
        scanf("%d", &*(ptr_array2 + i));
    }
    array_multiple(ptr_array1, ptr_array2, ptr_result, n);
    return 0;
}
void array_multiple(int *ptr_array1, int *ptr_array2, int *ptr_result, int n)
{
    int a = 0;
    for (int k = 0; k < size; k++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int i = 0; i < n; i++)
            {
                *(ptr_result + a) = *(ptr_result + a) + (*(ptr_array1 + i + n * k)) * (*(ptr_array2 + j + i * size));
            }
            a++;
        }
    }
    printf("[");
    for (int i = 0; i < size * size; i++)
    {
        printf("%d", *(ptr_result + i));
        if(i%size==0)
        {
            printf(" ");
        }
        if(i==size-1)
        {
            printf("\n ");
        }
    }
    printf("]");
}