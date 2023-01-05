/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.5                  **
 * ***********************************************
 */
#include <stdio.h>
int difference(double *numbers, int n);

int main(void)
{
    double numbers[10] = {3,8,2,9,4,7,0,2,5,7};

    printf("%d\n", difference(numbers, 10));

    return 0;
}

int difference(double *numbers, int n)
{
    int t_max = *numbers;
    int t_min = *numbers;
    for (int i = 1; i < n; i++)
    {
        if (*(numbers + i) > t_max)
            t_max = *(numbers + i);
        else if (*(numbers + i) < t_min)
            t_min = *(numbers + i);
    }

    return t_max - t_min;
}
