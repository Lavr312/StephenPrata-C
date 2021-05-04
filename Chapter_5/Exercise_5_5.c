/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.5                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    int count=0, sum=0, numberOfSteps;

    system("chcp 1251>0");
    printf("Укажите количество шагов\n");
    scanf("%d", &numberOfSteps);
    while (count++ < numberOfSteps)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}
