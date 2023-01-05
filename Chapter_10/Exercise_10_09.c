/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.9                  **
 * ***********************************************
 */
#include <stdio.h>
#define N 3
#define N1 5
void copy_mass(int n, int n1, double array1[][n1], double array2[][n1]);
void array_output(int n, int n1, double array[][n1]);

int main(void)
{
    double array1[N][N1] =
    {
        {1.5,2.8,3.6,4.7,5.3},
        {6.7,7.3,8.4,9.5,10.0},
        {11.5,12.3,13.8,14.2,15.9}
    };
    double array2[N][N1];

    copy_mass(N, N1, array1, array2);
    array_output(N, N1, array1);
    printf("\n");
    array_output(N, N1, array2);


    return 0;
}
void copy_mass(int n, int n1, double array1[][n1], double array2[][n1])
{
    for (int i = 0; i < n; i++)
        for (int i1 = 0; i1 < n1; i1++)
            *(*(array2 + i) + i1) = *(*(array1 + i) + i1);
}
void array_output(int n, int n1, double array[][n1])
{
    for (int i = 0; i < n; i++)
    {
        for (int i1 = 0; i1 < n1; i1++)
            printf("%.1lf ", *(*(array + i) + i1));
        printf("\n");
    }
}
