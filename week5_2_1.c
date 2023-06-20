#include <stdio.h>
int main(void)
{
    int column_number = 0, row_number = 0, grid_size = 0, i = 0, j = 0;
    printf("Please enter three number:1)column_number 2)row_number 3)grid_size\n");
    scanf("%d %d %d", &column_number, &row_number, &grid_size);
    for (j = 0; j < row_number + 1; j++)
    {
        for (i = 0; i < column_number; i++)
        {
            printf("+");
            for (int k = 0; k < grid_size; k++)
            {
                printf("-");
            }
            if (i == column_number - 1)
                printf("+\n");
        }
        if (j != row_number)
        {
            for (int m = 0; m < grid_size; m++)
            {
                for (i = 0; i < column_number; i++)
                {
                    printf("|");
                    for (int k = 0; k < grid_size; k++)
                    {
                        printf(" ");
                    }
                    if (i == column_number - 1)
                    {
                        printf("|\n");
                    }
                }
            }
        }
    }
    return 0;
}