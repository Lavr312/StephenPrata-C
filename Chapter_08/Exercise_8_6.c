/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.6                   **
 * ***********************************************
 */

#include <stdio.h>
#include <ctype.h>

char get_first();

int main()
{
    system("chcp 1251>0"); // windows encoding
    printf("%c\n", get_first());

    return 0;
}

char get_first()
{
    int ch;
    while ((ch = getchar()) == ' ')
        continue;
    while (getchar() != '\n')
        continue;
    return ch;
}
