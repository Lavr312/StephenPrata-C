/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.17                  **
 *************************************************
 */

#include <stdio.h>

int main()
{
    double chuckysContribution;
    int years = 0;

    system("chcp 1251>0"); // windows encoding
    chuckysContribution = 1000000;
    while (chuckysContribution > 0)
    {
        chuckysContribution *= 1.08;
        chuckysContribution -= 100000;
        years++;
    }
    printf("Вклад Чаки Лаки достигнет нуля за %d лет.\n", years);

    return 0;
}
