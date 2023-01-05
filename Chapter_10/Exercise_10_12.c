/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.11                 **
 * ***********************************************
 */
#include <stdio.h>
#define N 5
void summ_mass(int n, int array1[], int array2[], int array3[]);
void array_output(int n, int array[]);

int main(void)
{
    int array1[N], array2[N] = {2,7,3,8,2},
        array3[N] = {3,9,2,5,0};

    summ_mass(N, array1, array2, array3);
    array_output(N, array1);

    return 0;
}
void summ_mass(int n, int array1[], int array2[], int array3[])
{
    for (int i = 0; i < n; i++)
        *(array1 + i) = *(array2 + i) + *(array3 + i);
}
void array_output(int n, int array[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}
