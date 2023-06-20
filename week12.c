#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int size, si, tmp;
    int *ptr;

    size = atoi(*(argv + 1));
    si = sqrt(size);
    ptr = (int *)malloc(sizeof(int) * size);
    for (int i = 2; i < size + 2; i++)
    {
        *(ptr + i - 2) = atoi(*(argv + i));
    }

    for (int i = 0; i < si; i++)
    {
        for (int j = 0; j < si; j++)
        {
            printf("%2d ", *(ptr + j + i * si));
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0, j = si; i < si; i++)
    {
        tmp = *(ptr + i);
        *(ptr + i) = *(ptr + j * 2 + i);
        *(ptr + j * 2 + i) = tmp;
    }
    for (int i = 0; i < si; i++)
    {
        for (int j = 0; j < si; j++)
        {
            printf("%2d ", *(ptr + j + i * si));
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0, j = 1; i < size; i = i + si)
    {
        tmp = *(ptr + i);
        *(ptr + i) = *(ptr + j * 2 + i);
        *(ptr + j * 2 + i) = tmp;
    }
    for (int i = 0; i < si; i++)
    {
        for (int j = 0; j < si; j++)
        {
            printf("%2d ", *(ptr + j + i * si));
        }
        printf("\n");
    }

    return 0;
}