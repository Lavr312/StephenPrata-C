/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.3                   **
 * ***********************************************
 */
#include <stdio.h>

int main()
{
    int evenNumber = 0, oddNumber = 0;
    double evenAverage = 0, oddAverage = 0;
    char input;

    system("chcp 1251>0"); // windows encoding
    printf("Введите целые числа\n");
    while ((input = getchar()) != '0')
    {
        if (input <= 48)
            continue;
        input -= 48;
        if (input % 2 == 0)
        {
            evenNumber++;
            evenAverage += input;
        }
        else
        {
            oddNumber++;
            oddAverage += input;
        }
    }
    evenAverage /= evenNumber;
    oddAverage /= oddNumber;
    printf("Even: %d (%.1lf)\n", evenNumber, evenAverage);
    printf("Odd: %d (%.1lf)\n", oddNumber, oddAverage);

    return 0;
}
