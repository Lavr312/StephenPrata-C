/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.1                   **
 * ***********************************************
 */
#include <stdio.h>

int main()
{
    int space = 0, newline = 0, rest = 0;
    char input;

    system("chcp 1251>0"); // windows encoding
    while ((input = getchar()) != '#')
    {
        if (input == ' ')
            space++;
        else if (input == '\n')
            newline++;
        else
            rest++;
    }
    printf("%d пробелов\n", space);
    printf("%d символов новой строки\n", newline);
    printf("%d остальных символов.\n", rest);

    return 0;
}
