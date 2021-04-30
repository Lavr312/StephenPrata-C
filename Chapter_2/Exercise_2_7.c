/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 2.7                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
void happy(void);

int main()
{
    system("chcp 1251>0");
    happy();
    happy();
    happy();
    printf("\n");
    happy();
    happy();
    printf("\n");
    happy();
    printf("\n");

    return 0;
}

void happy(void)
{
    printf("Улыбайся!");
}
