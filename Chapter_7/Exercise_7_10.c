/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.10                  **
 * ***********************************************
 */
#include <stdio.h>
#define Tax_interest_one 0.15
#define Tax_interest_two 0.28
#define Cat1 17850
#define Cat2 23900
#define Cat3 29750
#define Cat4 14875

double Taxes(int, double);

int main()
{
    int Category_i;
    double Income_d, Taxes_d;

    printf("Укажите номер своей категории\n");
    printf("\n1) Одинокий\n2) Глава семейства\n");
    printf("3) Состоит в браке, совместное ведение хозяйства\n");
    printf("4) Состоит в браке, раздельное ведение хозяйства\n\n");
    while (scanf("%d", &Category_i) == 1)
    {
        if (Category_i<1 || Category_i>4)
            continue;
        printf("укажите ваш доход\n\n");
        while (scanf("%lf", &Income_d) == 1)
        {
            if (Income_d <= 0)
            {
                printf("Вы указали неверный доход\n");
                continue;
            }
            else
                break;
        }
        Taxes_d = Taxes(Category_i, Income_d);
        printf("Ваш доход после вычета налогов составляет %.2lf (Налог = %.2lf)\n",
               (Income_d - Taxes_d), Taxes_d);
        break;
    }

    return 0;
}

double Taxes(int Category, double Income)
{
    double Sum_taxes;

    if (Income <= 0)
    {
        printf("Вы указали неверный доход\n");
        return -1;
    }

    switch (Category)
    {
        case 1 :
            Sum_taxes = Tax_interest_one * Income;
            if (Income > Cat1)
                Sum_taxes += Tax_interest_two * (Income - Cat1);
            break;
        case 2 :
            Sum_taxes = Tax_interest_one * Income;
            if (Income > Cat2)
                Sum_taxes += Tax_interest_two * (Income - Cat2);
            break;
        case 3 :
            Sum_taxes = Tax_interest_one * Income;
            if (Income > Cat3)
                Sum_taxes += Tax_interest_two * (Income - Cat3);
            break;
        case 4 :
            Sum_taxes = Tax_interest_one * Income;
            if (Income > Cat4)
                Sum_taxes += Tax_interest_two * (Income - Cat4);
            break;
    }
    return Sum_taxes;
}
