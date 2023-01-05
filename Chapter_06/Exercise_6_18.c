/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.18                  **
 *************************************************
 */

#include <stdio.h>

int main()
{
    int friends = 5, week = 1;

    system("chcp 1251>0"); // windows encoding
    while (friends < 150)
    {
        friends -= week;
        friends *= 2;
        week++;
    }
    printf("Количество друзей превысило число Данбара "
           "спустя %d недель.\n", week);

    return 0;
}
