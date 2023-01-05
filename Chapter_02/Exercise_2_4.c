/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 2.4                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
void jolly(void);
void deny(void);

int main()
{
    system("chcp 1251>0");
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("Он весёлый человек!\n");
}

void deny(void)
{
    printf("Никто не может это отрицать!\n");
}
