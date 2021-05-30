/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.3                   **
 *************************************************
 */

#include <stdio.h>
#define MAX 6

int main()
{
    //system("chcp 1251>0"); // windows encoding
    for (int i = 0; i < MAX; i++)
    {
        for (int a = 0; a <= i; a++)
            printf("%c", 'F' - a);
        printf("\n");
    }

    return 0;
}
