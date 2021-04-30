/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 2.5                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
void br(void);
void ic(void);

int main()
{
    system("chcp 1251>0");
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");

    return 0;
}

void br(void)
{
    printf("Бразилия, Россия");
}

void ic(void)
{
    printf("Индия, Китай");
}
