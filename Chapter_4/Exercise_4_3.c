/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.3                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double count;

    system("chcp 1251>0");
    printf("Введите число\n");
    scanf("%lf", &count);
    printf("а. Вводом является %.1lf или %.1e.\n", count, count);
    printf("б. Вводом является %+.3lf или %.3E.\n", count, count);

    return 0;
}
