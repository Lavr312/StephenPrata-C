/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.4                  **
 * ***********************************************
 */
#include <stdio.h>
int max(double *numbers, int n);

int main(void)
{
    double numbers[10] = {3,8,2,9,4,7,0,2,5,7};

    printf("%d\n", max(numbers, 10));

    return 0;
}

int max(double *numbers, int n)
{
    double t = *numbers;
    int i1 = 0;

    for (int i = 1; i < n; i++)
        if (*(numbers + i) > t)
        {
            t = *(numbers + i);
            i1 = i;
        }

    return i1;
}
