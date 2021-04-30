/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 2.3                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define DAYS_IN_YEARS 365

int main()
{
    int years;
    long days;

    system("chcp 1251>0");
    printf("Укажите ваш возраст\n");
    scanf("%d", &years);
    days = (long) (years*DAYS_IN_YEARS);
    printf("%d лет = %ld дней.\n", years, days);

    return 0;
}
