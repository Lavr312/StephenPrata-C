/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.15                   **
 *************************************************
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char stringInput[255];

    system("chcp 1251>0"); // windows encoding
    printf("Введите строку\n");
    for (int i = 0; i < 255; i++)
    {
        scanf("%c", &stringInput[i]);
        if (stringInput[i] == '\n')
            break;
    }
    for (int i = strlen(stringInput)-1; i >= 0; i--)
        if (stringInput[i] != '\n')
            printf("%c", stringInput[i]);

    return 0;
}
