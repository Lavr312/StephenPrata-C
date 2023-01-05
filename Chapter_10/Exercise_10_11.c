/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.11                 **
 * ***********************************************
 */
#include <stdio.h>
#define N 3
#define N1 5
void array_double(int n, int (*array)[N1]);
void array_output(int n, int (*array)[N1]);

int main(void)
{
    int array[N][N1];

    for (int i = 0; i < N; i++)
        for (int i1 = 0; i1 < N1; i1++)
        {
            printf("Ввод строка %d символ %d\n", i+1, i1+1);
            scanf("%d", &array[i][i1]);
        }

    array_output(N, array);
    array_double(N, array);
    array_output(N, array);

    return 0;
}
void array_output(int n, int (*array)[N1])
{
    for (int l = 0; l < n; l++)
    {
        for (int f = 0; f < N1; f++)
            printf("%d ", array[l][f]);
        printf("\n");
    }
}
void array_double(int n, int (*array)[N1])
{
    for (int l = 0; l < n; l++)
        for (int f = 0; f < N1; f++)
            array[l][f] *= 2;
}
