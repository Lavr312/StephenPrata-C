/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.4                   **
 * ***********************************************
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch, b=0;
    int numberOfWords=0, numberOfLetters=0;

    while((ch=getchar()) != EOF)
    {
        if((ch != ' ') && (ch != '\n') && !ispunct(ch))
        {
            b=1;
            if(isalpha(ch))
                numberOfLetters++;
        } else if(b)
        {
            numberOfWords++;
            b=0;
        }
    }
    printf("Слов = %d\nБукв = %d\nСреднее количесвто букв в словах = %d\n",
           numberOfWords, numberOfLetters, numberOfLetters/numberOfWords);

    return 0;
}
