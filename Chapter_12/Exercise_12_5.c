/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 12.5                  **
 * ***********************************************
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void sort_binary(int *array, int max);

int main(void)
{
    int rand_numbers[100];

    srand((unsigned int) time(0));
    for (int i = 0; i < 100; i++)
        rand_numbers[i] = (rand() % 10) + 1;
    sort_binary(rand_numbers, 100);
    for (int i = 0; i < 100; i++)
        printf("%d\n", rand_numbers[i]);

    return 0;
}
void sort_binary(int *array, int max)
{
    int t;

    for (int i = 0; i < max - 1; i++)
        for (int b = 0; b < max - 1; b++)
            if (array[b] > array[b + 1])
            {
                t = array[b];
                array[b] = array[b + 1];
                array[b + 1] = t;
            }
}
