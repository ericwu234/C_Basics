#include <stdio.h>
#include <stdlib.h>
int second(int hr, int min, int sec);
int main(void)
{
    int hr = 0, min = 0, sec = 0, time = 0, t[2] = {0};
    for (int i = 0; i < 2; i++)
    {
        printf("enter:hours minutes seconds\n");
        scanf("%d %d %d", &hr, &min, &sec);
        t[i] = second(hr, min, sec);
    }
    time = abs(t[1] - t[0]);
    printf("seconds:%d", time);
}
int second(int hr, int min, int sec)
{
    sec = sec + hr * 3600 + min * 60;
    return sec;
}