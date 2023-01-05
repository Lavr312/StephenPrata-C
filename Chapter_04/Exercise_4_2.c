/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.2                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lastName[20];

    system("chcp 1251>0");
    printf("Напишите своё имя\n");
    scanf("%19s", lastName);
    printf("A) \"%s\"\n", lastName);
    printf("B) \"%20s\"\n", lastName);
    printf("C) \"%-20s\"\n", lastName);
    printf("D) %*s\n", strlen(lastName)+3, lastName);

    return 0;
}
