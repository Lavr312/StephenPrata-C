/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.8                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define CUPS_PER_PINT 2
#define OUNCES_PER_CUP 8
#define TABLESPOONS_TO_OUNCE 2
#define TEASPOONS_IN_A_TABLESPOON 3

int main()
{
    double pints, cups, ounces, tablespoons, teaspoons;

    system("chcp 1251>0");
    printf("Укажите объём в чашках\n");
    scanf("%lf", &cups);

    pints = cups/CUPS_PER_PINT;
    ounces = cups*OUNCES_PER_CUP;
    tablespoons = ounces*TABLESPOONS_TO_OUNCE;
    teaspoons = tablespoons*TEASPOONS_IN_A_TABLESPOON;

    printf("%.1lf пинт\n", pints);
    printf("%.1lf унций\n", ounces);
    printf("%.1lf столовых ложек\n", tablespoons);
    printf("%.1lf чайных ложек\n", teaspoons);

    return 0;
}
