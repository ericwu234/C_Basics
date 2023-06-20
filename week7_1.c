#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Status
{
    CONTINUE,
    WON,
    LOST
};
int decide(int sum);
int run(int gameStatus, int sum, int myPoint);
int final(int gameStatus);
int rollDice(void);
int main(void)
{
    srand(time(NULL));
    int myPoint;
    enum Status gameStatus;
    int sum = rollDice();
    gameStatus = decide(sum);
    gameStatus = run(gameStatus, sum, myPoint);
    final(gameStatus);
    return 0;
}
int decide(int sum)
{
    enum Status gameStatus;
    int myPoint;
    switch (sum)
    {
    case 7:
    case 11:
        return gameStatus = WON;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        return gameStatus;

    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);

        return gameStatus;
    }
}
int run(int gameStatus, int sum, int myPoint)
{
    while (CONTINUE == gameStatus)
    {
        sum = rollDice();
        if (sum == myPoint)
        {
            gameStatus = WON;
            return gameStatus;
        }
        else if (7 == sum)
        {
            gameStatus = LOST;
            return gameStatus;
        }
    }
}
int final(int gameStatus)
{
    if (WON == gameStatus)
    {
        puts("Player wins");
    }
    else
    {
        puts("Player loses");
    }
}
int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    printf("Player rolled %d+%d=%d\n", die1, die2, die1 + die2);
    return die1 + die2;
}