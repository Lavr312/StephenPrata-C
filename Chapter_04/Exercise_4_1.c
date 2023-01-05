/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.1                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lastName[20], firstName[20];

    system("chcp 1251>0");
    printf("Напишите своё имя\n");
    scanf("%19s", lastName);
    printf("Напишите свою фамилию\n");
    scanf("%19s", firstName);
    printf("%s %s\n", firstName, lastName);

    return 0;
}
