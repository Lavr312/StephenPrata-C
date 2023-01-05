/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.7                  **
 * ***********************************************
 */
#include <stdio.h>
#define N 2
void copy_ptr(double *target, double *source, int n);

int main(void)
{
    double mass1[N][N] =
    {
        {1.5,2.8},
        {3.6,4.7}
    };
    double mass2[N][N];

    for (int i = 0; i < N; i++)
        copy_ptr(*(mass2 + i), *(mass1 + i), N);
    for (int i = 0; i < N; i++)
    {
        for (int i1 = 0; i1 < N; i1++)
            printf("%.2lf ", *(*(mass2 + i) + i1));
        printf("\n");
    }

    return 0;
}

void copy_ptr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        *target++ = *source++;
}
