/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.5                   **
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
        switch (input)
        {
            case '.' : printf("!");
                numberOfReplacements++;
                break;
            case '!' : printf("!!");
                numberOfReplacements++;
                break;
            default: printf("%c", input);
        }
    }
    printf("\nБыло произведено %d замен.\n",
           numberOfReplacements);

    return 0;
}
