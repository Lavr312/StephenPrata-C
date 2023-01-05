/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.6                  **
 * ***********************************************
 */
#include <stdio.h>
void reverse_order(double *numbers, int n);

int main(void)
{
    double numbers[10] = {1,2,3,4,5,6,7,8,9,10};

    reverse_order(numbers, 10);
    for (int i = 0; i < 10; i++)
        printf("%.2lf ", *(numbers + i));
    printf("\n");

    return 0;
}

void reverse_order(double *numbers, int n)
{
    double t;

    for (int i = 0; i < n / 2; i++)
    {
        t = *(numbers + i);
        *(numbers + i) = *(numbers + n - i - 1);
        *(numbers + n - i - 1) = t;
    }
}
