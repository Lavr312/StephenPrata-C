/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.11                  **
 * ***********************************************
 */
#include <stdio.h>

int primeNumber(int number);

int main()
{
    int input;

    system("chcp 1251>0"); // windows encoding
    printf("Введите целое число\n");
    scanf("%d", &input);
    for (int i = input; i > 0; i--)
    {
        if (primeNumber(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

int primeNumber(number)
{
    if (number <= 3)
        return 1;

    for (int i = number - 1; i >= 2; i--)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}
