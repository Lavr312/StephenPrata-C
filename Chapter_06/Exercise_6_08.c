/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.8                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    double countOne, countTwo, countThree;

    system("chcp 1251>0"); // windows encoding
    while(1)
    {
        printf("Введите первое число\n");
        if (!scanf("%lf", &countOne))
            break;
        printf("Введите второе число\n");
        if (!scanf("%lf", &countTwo))
            break;
        if ((countOne == 0.0) || (countTwo == 0.0))
        {
            printf("Нельзя делить на ноль\n");
            continue;
        }
        countThree = (countOne-countTwo)/(countOne*countTwo);
        printf("%.2lf\n", countThree);
    }

    return 0;
}
