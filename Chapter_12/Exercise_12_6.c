/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 12.6                  **
 * ***********************************************
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_RAND 1000

int main(void)
{
    unsigned int rand_number;

    srand((unsigned int) time(0));
    unsigned int ten_numbers[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < MAX_RAND; i++)
    {
        rand_number = (rand() % 10) + 1;
        for (int check = 0; check < 10; check++)
            if (rand_number == check + 1)
                ten_numbers[check]++;
    }
    for (int i = 0; i < 10; i++)
        printf("%d: %d\n", i + 1, ten_numbers[i]);

    return 0;
}
