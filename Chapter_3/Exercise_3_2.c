/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.2                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int symbol;

    system("chcp 1251>0");
    printf("Введите значение ASCII символа\n");
    scanf("%d", &symbol);
    printf("%d = %c", symbol, symbol);

    return 0;
}
