/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.2                   **
 * ***********************************************
 */
#include <stdio.h>

int main()
{
    int chapterCounter = 0;
    char input;

    system("chcp 1251>0"); // windows encoding
    while ((input = getchar()) != '#')
    {
        if (input > 32)
        {
            chapterCounter++;
            printf("%c - %d ", input, input);
            if ((chapterCounter % 8) == 0)
                printf("\n");
        }
    }

    return 0;
}
