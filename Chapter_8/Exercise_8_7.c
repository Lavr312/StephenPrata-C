/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.7                   **
 * ***********************************************
 */

#include <stdio.h>
#include <ctype.h>
#define TARIF0 8.75
#define TARIF1 9.33
#define TARIF2 10.00
#define TARIF3 11.20

double totalSalary(int clock, double tarif);
double taxes(double cash);
void output(double totalAmountOfCharges, double taxes, double netSalary);
double menu();
int checkMenu();
void dropInput();

int main()
{
    int clock;
    double totalAmountOfCharges, numberOfTaxes, netSalary;
    double tarif = 10.0;

    system("chcp 1251>0"); // windows encoding
    printf("Сколько часов вы отработали на этой недели?\n");
    scanf("%d", &clock);
    dropInput();
    while ((tarif = menu()) != -1.0)
    {
        totalAmountOfCharges = totalSalary(clock, tarif);
        numberOfTaxes = taxes(totalAmountOfCharges);
        netSalary = totalAmountOfCharges - numberOfTaxes;
        output(totalAmountOfCharges, numberOfTaxes, netSalary);
    }
    printf("До свидания.\n");

    return 0;
}

double totalSalary(int clock, double tarif)
{
    if (clock > 40)
        return ((clock - 40) * 1.5 * tarif) + tarif * 40;
    else
        return tarif * clock;
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

double menu()
{
    int numberMenu;
    double tarifMenu;

    printf("\n***********************************************************************\n");
    printf("Введите букву, соответствующую желаемой " \
        "тарифной ставке или действию:\n");
    printf("a) $%.2lf/ч                  b) $%.2lf/ч\n", TARIF0, TARIF1);
    printf("c) $%.2lf/ч                  d) $%.2lf/ч\nq) Выход\n", TARIF2, TARIF3);
    printf("***********************************************************************\n");
    while (numberMenu = checkMenu())
    {
        switch (numberMenu)
        {
            case 'a':
                tarifMenu = TARIF0;
                break;
            case 'b':
                tarifMenu = TARIF1;
                break;
            case 'c':
                tarifMenu = TARIF2;
                break;
            case 'd':
                tarifMenu = TARIF3;
                break;
            case 'q':
                tarifMenu = -1;
                break;
            default:
                tarifMenu = 0;
        }
        if (tarifMenu != 0)
            break;
        else
            printf("Вы ввели неверное значение!!!\n");
    }
    return tarifMenu;
}

int checkMenu()
{
    int check;

    while (scanf("%c", &check))
    {
        dropInput();
        if (((check >= 'a') && (check <= 'd')) || (check == 'q'))
            break;
        else
        {
            printf("Вы ввели неправильное значение!\n");
            continue;
        }
    }
    return check;
}

void dropInput()
{
    while (getchar() != '\n')
        continue;
}
