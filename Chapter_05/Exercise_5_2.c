/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.2                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;

    system("chcp 1251>0");
    printf("Введите целое число\n");
    scanf("%d", &count);
    for (int i=1; i<=10; i++)
        printf("%d ", count+i);

    return 0;
}
