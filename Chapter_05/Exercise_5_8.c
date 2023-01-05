/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.8                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    int operandOne, operandTwo;

    system("chcp 1251>0");
    printf("Эта программа вычисляет результаты"
           " деления по модулю.\n");
    printf("Введите целое число, которое будет"
           " служить вторым операндом: ");
    scanf("%d", &operandTwo);
    printf("Теперь введите первый операнд: ");
    while (1)
    {
        scanf("%d", &operandOne);
        if (operandOne <= 0)
        {
            printf("Готово\n");
            break;
        }
        printf("%d %% %d равно %d\n", operandOne,
               operandTwo, operandOne%operandTwo);
        printf("Введите следующее число для первого"
               " операнда (<= 0 для выхода из программы): ");
    }

    return 0;
}
