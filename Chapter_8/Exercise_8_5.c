/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.5                   **
 *************************************************
 */

#include <stdio.h>
#include <ctype.h>
#define ONE_START 50

int input(char in);

int main()
{
    int left = 0, right = 100, buff = 50; // Левая граница, правая и среднее между ними.

    system("chcp 1251>0"); // windows encoding
    printf("Выберите целое число в инттервале от 1 до 100. Я попробую угадать ");
    printf("его.\nНажмите клавишу y, если моя догадка верна и ");
    printf("\nклавишу n в противном случае.");
    printf("Вашим числом является %d?\n", buff);
    while (!input('y'))
    {
        printf("Ваше число больше %d?\n", buff);
        if (input('y'))
        {
            left = buff;
            buff = left + ((right - left) / 2);
        }
        else
        {
            right = buff;
            buff = right - ((right - left) / 2);
        }
        printf("Ладно, тогда это %d?\n", buff);
    }
    printf("Я знал, что у меня получиться!\n");

    return 0;
}

int input(char in)
{
    char buff;

    buff = getchar();
    while (getchar() != '\n')
        continue;
    if (buff == in)
        return 1;

    return 0;
}
