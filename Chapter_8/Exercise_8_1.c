/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.1                   **
 * ***********************************************
 */
#include <stdio.h> // It was me, Dio!!!

int main()
{
    int ch, k=0;
    
    while ((ch = getchar()) != EOF)
    {
        if ((ch != '\n') && (ch != '\t') && (ch != ' '))
            k++;
    }
    printf("%d\n", k);

    return 0;
}
