/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.8                  **
 * ***********************************************
 */
#include <stdio.h>
#define N 7
#define N1 3
void copy_ptr(double *target, double *source, int n);

int main(void)
{
    double mass1[N] = {1.5,2.8,3.6,4.7,5.3,6.1,7.0};
    double mass2[N1];

    copy_ptr(mass2, mass1 + 2, N1);

    for (int i1 = 0; i1 < N1; i1++)
        printf("%.2lf ", *(mass2 + i1));
    printf("\n");

    return 0;
}

void copy_ptr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        *target++ = *source++;
}
