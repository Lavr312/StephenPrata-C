/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.3                  **
 * ***********************************************
 */
#include <stdio.h>
int max(int *numbers, int n);

int main(void)
{
    int numbers[10] = {3,8,2,9,4,7,0,2,5,7};

    printf("%d\n", max(numbers, 10));

    return 0;
}

int max(int *numbers, int n)
{
    int t = *numbers;
    for (int i = 1; i < n; i++)
        if (*(numbers + i) > t)
            t = *(numbers + i);

    return t;
}
