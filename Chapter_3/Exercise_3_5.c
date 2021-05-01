/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.5                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double secondInYears=3.156e7;
    int years;

    system("chcp 1251>0");
    printf("Введите возраст в годах\n");
    scanf("%d", &years);
    printf("%lf\n", secondInYears*years);
    printf("%e\n", secondInYears*years);

    return 0;
}
