/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.1                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    double count=2.12345678;
    float countf=count;
    system("chcp 1251>0");
    printf("Int max: %d (%d)\n", INT_MAX, INT_MAX+1);
    printf("Int min: %d (%d)\n", INT_MIN, INT_MIN-1);
    printf("Double %lf = Float %f\n", count, countf);
    return 0;
}
