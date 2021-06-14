/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.14                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    double arrayOne[8];
    double arrayTwo[8];

    system("chcp 1251>0"); // windows encoding
    for (int i = 0; i < 8; i++)
    {
        printf("Укажите %d элемент\n", i+1);
        scanf("%lf", &arrayOne[i]);
        if (i > 0)
            arrayTwo[i] = arrayTwo[i-1] + arrayOne[i];
        else
            arrayTwo[i] = arrayOne[i];
    }
    printf("Array 1: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%4.1lf ", arrayOne[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%4.1lf ", arrayTwo[i]);
    }
    printf("\n");

    return 0;
}
