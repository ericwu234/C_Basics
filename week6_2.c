#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int functionguessing(int ans, int enter);
int main(void)
{
    srand(time(NULL));
    int down = 1, up = 100, ans = 0, enter = 0, decide = 0;
    printf("Guess number from %d to %d\n", down, up);
    scanf("%d", &enter);
    ans = (rand() % 100) + 1;
    while (decide != 1)
    {
        
        decide = functionguessing(ans, enter);
        if (decide == 2)
        {   
            ans = (rand() % 100) + 1;
            up = 100;
            down = 1;
            enter=0;
        }
        if (decide != 1)
        {
            if (ans > enter && enter > down && enter < up)
                down = enter;
            else if (ans < enter && enter > down && enter < up)
                up = enter;
            printf("Guess number from %d to %d\n", down, up);
            scanf("%d", &enter);
            
        }
    }
    return 0;
}
int functionguessing(int ans, int enter)
{
    int number;
    if (ans == enter)
    {
        printf("You passed,next game?\n(enter 1 to next game)\n");
        scanf("%d", &number);
        if (number == 1)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
    else if (ans > enter)
    {
        printf("Too low!\n");
        return 0;
    }
    else if (ans < enter)
    {
        printf("Too high!\n");
        return 0;
    }
}