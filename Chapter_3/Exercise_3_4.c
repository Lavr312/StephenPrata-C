/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.4                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double count;

    system("chcp 1251>0");
    printf("Введите значение с плавающей запятой: ");
    scanf("%lf", &count);
    printf("\nЗапись с фиксированной запятой: %lf\n", count);
    printf("Экспоненциальная форма записи: %e\n", count);
    printf("Двоично-экспоненциальное представление: %a\n", count);

    return 0;
}
