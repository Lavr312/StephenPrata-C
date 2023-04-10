#include <stdio.h>
#include "Exercise_12_2.h"

int set_mode(int mode)
{
    if (!mode)
        mode = 0;
    else
        mode = 1;

    return mode;
}
void get_info(int mode, const int * const distance, const int * const spent_fuel)
{
    if (!mode)
    {
        printf("Введите расстояние ");
        scanf("%d", distance);
        printf("Введите колличество потраченного топлива ");
        scanf("%d", spent_fuel);
    }
    else
        puts("Не поддерживается");
}
void show_info(int mode, int distance, int spent_fuel, int * const fuel_consumption)
{
    if (!mode)
    {
        *fuel_consumption = spent_fuel / (double) distance * 100;
        printf("Расход топлива = %d литров на 100 км.\n", *fuel_consumption);
    }
}
