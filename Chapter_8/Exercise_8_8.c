/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.8                   **
 * ***********************************************
 */

#include <stdio.h>
#define MENU1 'a' // Английские буквы, потому что в ASCII нет кириллицы.
#define MENU2 's'
#define MENU3 'm'
#define MENU4 'd'
#define MENU5 'e'
void outputMenu();
char inputMenu();
void operation(char menu);
void dropInput();

int main()
{
    char input;

    outputMenu();
    while (input = inputMenu())
    {
        if (input == MENU5)
        {
            printf("До свидания.\n");
            break;
        }
        else
        {
            operation(input);
            outputMenu();
        }
    }

    return 0;
}

void outputMenu()
{
    printf("Выберите желаемую операцию:\n");
    printf("%c. сложение        %c. вычитание\n", MENU1, MENU2);
    printf("%c. умножение       %c. деление\n", MENU3, MENU4);
    printf("%c. завершение\n", MENU5);
}

char inputMenu()
{
    char input;

    while (scanf("%c", &input))
    {
        dropInput();
        if ((input == MENU1) || (input == MENU2) || (input == MENU3) || (input == MENU4) || (input == MENU5))
            break;
        else
        {
            printf("Вы ввели неправильное значение!\n");
            continue;
        }
    }
    return input;
}

void operation(char menu)
{
    double countOne, countTwo;
    char buff[21];

    printf("Введите первое число: ");
    while (scanf("%lf", &countOne) != 1)
    {
        scanf("%20s", buff);
        printf("%s не является числом.\n", buff);
        dropInput();
    }
    dropInput();

    printf("Введите второе число: ");
    while (1)
    {
        while (scanf("%lf", &countTwo) != 1)
        {
            scanf("%20s", buff);
            printf("%s не является числом.\n", buff);
            dropInput();
        }
        dropInput();
        if ((menu == MENU4) && (countTwo == 0.0))
        {
            printf("На ноль делить нельзя.\n");
            continue;
        }
        else
            break;
    }
    switch (menu)
    {
        case MENU1:
        {
            printf("%.2f + %.2f = %.2f\n", countOne, countTwo, countOne + countTwo);
            break;
        }
        case MENU2:
        {
            printf("%.2f - %.2f = %.2f\n", countOne, countTwo, countOne - countTwo);
            break;
        }
        case MENU3:
        {
            printf("%.2f * %.2f = %.2f\n", countOne, countTwo, countOne * countTwo);
            break;
        }
        case MENU4:
        {
            printf("%.2f / %.2f = %.2f\n", countOne, countTwo, countOne / countTwo);
            break;
        }
    }
}

void dropInput()
{
    while (getchar() != '\n')
        continue;
}
