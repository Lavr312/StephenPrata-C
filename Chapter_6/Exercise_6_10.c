/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.10                   **
 *************************************************
 */

#include <stdio.h>
int computation(int numberOneSquared, int numberTwoSquared);

int main()
{
    int numberOne, numberTwo;
    int numberOneSquared, numberTwoSquared;

    system("chcp 1251>0"); // windows encoding
    while(1)
    {
        printf("Введите нижний и верхний целочисленные пределы: ");
        scanf("%d%d", &numberOne, &numberTwo);
        if (numberTwo <= numberOne)
        {
            printf("Работа завершена\n");
            break;
        }
        numberOneSquared = numberOne * numberOne;
        numberTwoSquared = numberTwo * numberTwo;
        printf("\nСумма квадратов целых чисел от %d до %d равна %d\n",
        numberOneSquared, numberTwoSquared, computation(numberOne, numberTwo));
    }

    return 0;
}

int computation(int numberOne, int numberTwo)
{
    int numberThree = 0;

    for (int i = numberOne; i <= numberTwo; i++)
    {
        numberThree += i * i;
    }
    return numberThree;
}
