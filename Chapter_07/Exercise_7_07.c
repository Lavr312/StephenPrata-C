/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.7                   **
 * ***********************************************
 */

#include <stdio.h>
#include <ctype.h>
double totalSalary(int clock);
double taxes(double cash);
void output(double totalAmountOfCharges, double taxes, double netSalary);

int main()
{
    int clock;
    double totalAmountOfCharges, numberOfTaxes, netSalary;

    system("chcp 1251>0"); // windows encoding
    printf("Сколько часов вы отработали на этой недели?\n");
    scanf("%d", &clock);
    totalAmountOfCharges = totalSalary(clock);
    numberOfTaxes = taxes(totalAmountOfCharges);
    netSalary = totalAmountOfCharges - numberOfTaxes;
    output(totalAmountOfCharges, numberOfTaxes, netSalary);

    return 0;
}

double totalSalary(int clock)
{
    double cash;

    cash = 10 * clock;
    if (clock > 40)
        return ((clock - 40) * 1.5 * 10) + cash;
    return cash;
}

double taxes(double cash)
{
    double taxes;

    taxes = cash * 0.15;
    if (cash > 300 && cash <= 450)
        taxes += (cash - 300) * 0.2;
    else if (cash > 450)
        taxes += (cash - 450) * 0.25;
    return taxes;
}

void output(double totalAmountOfCharges, double taxes, double netSalary)
{
    printf("Общая сумма начислений = %.2lf.\n", totalAmountOfCharges);
    printf("Вы заплотили налогов на %.2lf.\n", taxes);
    printf("Ваша чистая зарплата = %.2lf\n", netSalary);
}
