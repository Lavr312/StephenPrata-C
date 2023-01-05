/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.4                   **
 *************************************************
 */

#include <stdio.h>
#define CENTIMETERS_PER_FEET 30.48
#define CENTIMETERS_PER_INCHES 2.54

int main()
{
    double centimeters, inches;
    int feet;

    system("chcp 1251>0");
    printf("Введите высоту в сантиметрах: ");
    while (1)
    {
        scanf("%lf", &centimeters);
        if (centimeters<=0)
        {
            printf("Работа завершена.");
            break;
        }
        feet = centimeters/CENTIMETERS_PER_FEET;
        inches = (centimeters-(feet*CENTIMETERS_PER_FEET))/
            CENTIMETERS_PER_INCHES;
        printf("%.1lf см = %d футов, %.1lf дюймов\n",
               centimeters, feet, inches);
        printf("Введите высоту в сантиметрах (<=0 для"
               " выхода из программы): ");
    }

    return 0;
}
