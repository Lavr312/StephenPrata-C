/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 10.1                  **
 * ***********************************************
 */
#include <stdio.h>
#define MONTHS 12 // количество месяцев в году
#define YEARS 5 // количество лет, для которых доступны данные

int main(void)
{
    // инициализация данными об осадках за период с 2010 по 2014 гг.
    const float rain[YEARS][MONTHS] =
    {
        {4,6,3,8,3,8,3,8,7,9,2,5},
        {0,6,3,8,3,8,3,9,7,8,2,1},
        {3,6,3,7,3,8,3,1,7,0,2,7},
        {2,6,2,8,3,8,3,2,7,2,2,6},
        {1,6,8,8,3,8,3,5,7,1,2,2}
    };
    int year, month;
    float subtot, total;

    printf("ГОД КОЛИЧЕСТВО ОСАДКОВ (в дюймах)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    { // для каждого года суммировать количество осадков за каждый месяц
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += *(*(rain+year)+month);
            //subtot += rain[year][month];
        printf("%5d %15.lf\n", 2010 + year, subtot);
        total += subtot; // общая сумма для всех лет
    }
    printf ("\nСреднегодовое количество осадков составляет %.lf дюймов. \n\n",
        total/YEARS);
    printf("СРЕДНЕМЕСЯЧНОЕ КОЛИЧЕСТВО ОСАДКОВ:\n\n") ;
    printf(" Янв Фев Мар Апр Май Июн Июл Авг Сен Окт") ;
    printf(" Ноя Дек\n");

    for (month = 0; month < MONTHS; month++)
    { // для каждого месяца суммировать количество осадков на протяжении годов
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += *(*(rain+year) + month);
            //subtot += rain[year][month];
        printf("%3.lf ", subtot/YEARS);
    }
    printf("\n");

    return 0;
}
