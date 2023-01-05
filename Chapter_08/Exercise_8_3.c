/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.3                   **
 * ***********************************************
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    int lowercase=0, uppercase=0, other=0;

    system("chcp 1251>0"); // windows encoding
    while((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            if (isupper(ch))
                uppercase++;
            else
                lowercase++;
        } else
            other++;
    }
    printf("Символов верхнего регистра - %d\nСимволов нижнего " \
        "регистра - %d\nОстальных - %d\n", uppercase, lowercase, other);

    return 0;
}
