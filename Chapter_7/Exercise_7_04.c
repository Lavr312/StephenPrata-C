/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.4                   **
 * ***********************************************
 */
#include <stdio.h>

int main()
{
    int numberOfReplacements = 0;
    char input;

    system("chcp 1251>0"); // windows encoding
    while ((input = getchar()) != '#')
    {
        if (input == '.')
        {
            printf("!");
            numberOfReplacements++;
        } else if (input == '!')
        {
            printf("!!");
            numberOfReplacements++;
        } else
            printf("%c", input);
    }
    printf("\nБыло произведено %d замен.\n",
           numberOfReplacements);

    return 0;
}
