/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.1                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    char alphabet[26];

    //system("chcp 1251>0"); // windows encoding
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 'a' + i;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c\n", alphabet[i]);
    }

    return 0;
}
