/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 12.4                  **
 * ***********************************************
 */
#include <stdio.h>
int call(void);

int main(void)
{
    printf("%d\n", call());
    printf("%d\n", call());
    printf("%d\n", call());

    return 0;
}
int call(void)
{
    static int number_of_calls = 0;
    number_of_calls++;

    return number_of_calls;
}
