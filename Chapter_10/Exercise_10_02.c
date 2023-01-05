/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.2                  **
 * ***********************************************
 */
#include <stdio.h>
void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source, double *source_end);

int main(void)
{
    double source[5] = {1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);


    printf("Target1) ");
    for (int i = 0; i < 5; i++)
        printf("%.2lf ", *(target1 + i));
    printf("\n");
    printf("Target2) ");
    for (int i = 0; i < 5; i++)
        printf("%.2lf ", *(target2 + i));
    printf("\n");
    printf("Target3) ");
    for (int i = 0; i < 5; i++)
        printf("%.2lf ", *(target3 + i));
    printf("\n");

    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        *target++ = *source++;
}

void copy_ptrs(double *target, double *source, double *source_end)
{
    for (; source < source_end; target++, source++)
        *target = *source;
}
