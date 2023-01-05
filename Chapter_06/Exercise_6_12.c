/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.12                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    double sequenceOne, sequenceTwo;
    int limitOne, limitTwo;

    system("chcp 1251>0"); // windows encoding
    while(1)
    {
        sequenceOne = 0; sequenceTwo = 0;
        printf("Введите предел для первой последовательности\n");
        scanf("%d", &limitOne);
        printf("Введите предел для второй последовательности\n");
        scanf("%d", &limitTwo);
        if ((limitOne <= 0) || (limitTwo <= -324))
        {
            printf("Работа завершена\n");
            break;
        }
        for (int i = 1; i <= limitOne; i++)
        {
            sequenceOne += 1.0/i;
        }
        for (int i = 1; i <= limitTwo; i++)
        {
            if (i % 2 == 1)
                sequenceTwo += 1.0/i;
            else
                sequenceTwo -= 1.0/i;
        }
        printf("1) %.3lf\n2) %.3lf\n", sequenceOne, sequenceTwo);
    }
    return 0;
}
