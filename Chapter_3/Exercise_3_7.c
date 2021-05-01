/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.7                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define CENTIMETERS_TO_INCHES 2.54

int main()
{
    double centimeters, inches;

    system("chcp 1251>0");
    printf("Укажите свой рост в сантиметрах\n");
    scanf("%lf", &centimeters);
    inches = centimeters/CENTIMETERS_TO_INCHES;
    printf("%lf", inches);

    return 0;
}
