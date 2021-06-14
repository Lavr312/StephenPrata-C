/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.13                   **
 *************************************************
 */

#include <stdio.h>
int powers(int i);
int main()
{
    int powersOfTwo[8];

    system("chcp 1251>0"); // windows encoding
    for (int i = 0; i < 8; i++)
    {
        powersOfTwo[i] = powers(i);
    }
    int i = 0;
    do
    {
        printf("2 в %d степени = %d\n", i, powersOfTwo[i]);
    } while(i++ < 7);

    return 0;
}

int powers(int i)
{
    int number = 1;

    for (; i > 0; i--)
        number *= 2;
    return number;
}
