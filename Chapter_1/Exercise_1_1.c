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
    printf("������� ���������� ������\n");
    scanf("%lf", &inches);
    centimeters = inches*CENTIMETERS_TO_INCHES;
    printf("%.2lf ������ = %.2lf �����������.\n", inches, centimeters);

    return 0;
}
