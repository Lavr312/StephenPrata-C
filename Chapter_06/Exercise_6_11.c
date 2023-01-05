/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.11                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    int numbers[8];

    system("chcp 1251>0"); // windows encoding
    printf("Введите восемь целых чисел\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", numbers[i]);
    }
    puts("\n");
    return 0;
}
