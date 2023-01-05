/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 2.8                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
void one_three(void);
void two(void);

int main()
{
    system("chcp 1251>0");
    printf("Начинаем:\n");
    one_three();
    printf("\nпорядок!\n");

    return 0;
}

void one_three(void)
{
    printf("один\n");
    two();
    printf("\nтри");
}

void two(void)
{
    printf("два");
}
