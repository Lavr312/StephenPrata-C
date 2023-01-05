/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.3                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    int daysInput, days, weeks;

    system("chcp 1251>0");
    while (1)
    {
        printf("Укажите количество дней\n");
        scanf("%d", &daysInput);
        if (daysInput<=0)
            break;
        weeks = daysInput/7;
        days = daysInput%7;
        printf("%d дней составляют %d недели %d и дня.\n",
               daysInput, weeks, days);
    }

    return 0;
}
