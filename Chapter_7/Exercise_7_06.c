/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.6                   **
 * ***********************************************
 */
#include <stdio.h>

int main()
{
    char input;
    char previousCharacter, currentCharacter;
    int numberOfOccurrences = 0;

    system("chcp 1251>0"); // windows encoding
    while ((input = getchar()) != '#')
    {
        if ((input == 'i') && (previousCharacter == 'e'))
        {
            numberOfOccurrences++;
            previousCharacter = input;
        } else
            previousCharacter = input;
    }
    printf("%d\n", numberOfOccurrences);

    return 0;
}
