/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.8                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define LITERS_PER_GALLON 3.785
#define KILOMETERS_PER_MILE 1.609

int main()
{
    double miles, gallons;

    system("chcp 1251>0");
    printf("Укажите количество преодолённых миль\n");
    scanf("%lf", &miles);
    printf("Укажите количество галлонов израсходованного бензина\n");
    scanf("%lf", &gallons);
    printf("На одном галлоне вы проехали %.1lf миль\n", miles/gallons);
    printf("На 100 км вы израсходовали %.1lf литров\n",
           (gallons*LITERS_PER_GALLON)/(miles*KILOMETERS_PER_MILE)*100);

    return 0;
}
