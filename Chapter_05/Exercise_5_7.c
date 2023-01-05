/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.7                   **
 *************************************************
 */

#include <stdio.h>
void cube(double count);

int main()
{
    double count;

    system("chcp 1251>0");
    printf("Введите число\n");
    scanf("%lf", &count);
    cube(count);

    return 0;
}

void cube(double count)
{
    printf("%.1lf в кубе = %.1lf\n", count,
           count*count*count);
}
