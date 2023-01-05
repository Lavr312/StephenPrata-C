/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.4                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define CENTIMETERS_TO_METER 100.0
int main()
{
    char lastName[20];
    float height, heightMeters;

    system("chcp 1251>0");
    printf("Напишите ваше имя\n");
    scanf("%19s", lastName);
    printf("Укажите свой рост в сантиметрах\n");
    scanf("%f", &height);
    heightMeters = height/CENTIMETERS_TO_METER;
    printf("%s, ваш рост составляет %.3f метров\n", lastName, heightMeters);

    return 0;
}
