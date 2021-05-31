/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.6                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    int upperLimit, lowerLimit;

    system("chcp 1251>0"); // windows encoding
    printf("Укажите верхний предел таблицы\n");
    scanf("%d", &upperLimit);
    printf("Укажите нижний предел таблицы\n");
    scanf("%d", &lowerLimit);
    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}
