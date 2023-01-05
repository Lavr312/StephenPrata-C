/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.6                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define GRAMM_IN_KWARTA 950

int main()
{
    double MOLECULAR_MASS=3e-25;
    double kwarta;

    system("chcp 1251>0");
    printf("Укажите объём в квартах\n");
    scanf("%lf", &kwarta);
    printf("%e молекул\n", GRAMM_IN_KWARTA*kwarta/MOLECULAR_MASS);

    return 0;
}
