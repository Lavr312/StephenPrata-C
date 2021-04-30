/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 1.1                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define CENTIMETERS_TO_INCHES 2.54

int main()
{
    double inches, centimeters;

    system("chcp 1251>0");
    printf("Укажите количество дюймов\n");
    scanf("%lf", &inches);
    centimeters = inches*CENTIMETERS_TO_INCHES;
    printf("%.2lf дюймов = %.2lf сантиметров.\n", inches, centimeters);

    return 0;
}
