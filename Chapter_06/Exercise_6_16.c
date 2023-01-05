/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.16                  **
 *************************************************
 */

#include <stdio.h>

int main()
{
    double daphnesContribution, deidrasContribution, daphnesInitialContribution;
    int years = 0;

    system("chcp 1251>0"); // windows encoding
    daphnesContribution = 100;
    deidrasContribution = 100;
    daphnesInitialContribution = daphnesContribution * 0.1;
    while (deidrasContribution <= daphnesContribution)
    {
        daphnesContribution += daphnesInitialContribution;
        deidrasContribution *= 1.05;
        years++;
    }
    printf("Вклад Дейдры (%.1lf) превысил вклад Дафны"
           "(%.0lf) за %d лет.\n", deidrasContribution,
           daphnesContribution, years);

    return 0;
}
