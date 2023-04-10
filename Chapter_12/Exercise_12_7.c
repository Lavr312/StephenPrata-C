/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 12.7                  **
 * ***********************************************
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dice, sides, roll, summ = 0;

    srand((unsigned int) time(0));
    puts("Введите количество бросков (0 для выхода)");
    while (scanf("%d", &roll) == 1 && roll >= 1)
    {
        puts("Кости");
        scanf("%d", &dice);
        puts("Грани");
        scanf("%d", &sides);

        for (int n_roll = 0; n_roll < roll; n_roll++)
        {
            for (int n_dice = 0; n_dice < dice; n_dice++)
                summ += (rand() % sides) + 1;
            printf("%d ", summ);
            summ = 0;
        }
        puts("\nВведите количество бросков (0 для выхода)");
    }

    return 0;
}
