/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.4                   **
 *************************************************
 */

#include <stdio.h>
#define MAX 6

int main()
{
    int count = 0;

    //system("chcp 1251>0"); // windows encoding
    for (int i = 0; i < MAX; i++)
    {
        count += i;
        for (int a = 0; a <= i; a++)
            printf("%c", 'A' + a + count);
        printf("\n");
    }


    return 0;
}
