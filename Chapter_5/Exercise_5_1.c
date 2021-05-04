/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.1                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define MINUTES_PER_HOURS 60

int main()
{
    int minutes, hours;

    system("chcp 1251>0");
    while(1)
    {
        printf("Укажите количество минут\n");
        scanf("%d", &minutes);
        if (minutes <= 0)
            break;
        hours = minutes/60;
        minutes = minutes%60;
        printf("%d минут и %d часов\n", minutes, hours);
    }

    return 0;
}
