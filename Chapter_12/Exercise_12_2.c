/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 12.2                  **
 * ***********************************************
 */
#include <stdio.h>
#include "Exercise_12_2.h"

int main(void)
{
    int mode, distance, spent_fuel, fuel_consumption;

    printf("Введите 0 для метрического режима или 1 для американского режима: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        mode = set_mode(mode);
        get_info(mode, &distance, &spent_fuel);
        show_info(mode, distance, spent_fuel, &fuel_consumption);
        printf("Введите 0 для метрического режима или 1 для американского режима: ");
        printf(" (-1 для завершения): ");
        scanf("%d", &mode);
    }
    printf("Программа завершена.\n");

    return 0;
}
