/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.7                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    double count_d=1.0/3.0;
    float count_f=1.0/3.0;

    system("chcp 1251>0");
    printf("D: %.4lf\nF: %.4f\n\n", count_d, count_f);
    printf("D: %.12lf\nF: %.12f\n\n", count_d, count_f);
    printf("D: %.16lf\nF: %.16f\n\n", count_d, count_f);
    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);

    return 0;
}
