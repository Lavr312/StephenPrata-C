/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 5.9                   **
 *************************************************
 */

#include <stdio.h>
void Temperatures(double degreesFahrenheit);

int main()
{
    double Fahrenheit;

    system("chcp 1251>0");
    printf("Введите температуру в градусах Фаренгейта\n");
    while (scanf("%lf", &Fahrenheit) == 1)
        Temperatures(Fahrenheit);

    return 0;
}

void Temperatures(double degresFahrenheit)
{
    double Celsius, Kelvin;
    const double constCelsius1=5.0/9.0, constCelsius2=32.0,
        constKelvin=273.16;

    Celsius = constCelsius1*(degresFahrenheit-constCelsius2);
    Kelvin = Celsius+constKelvin;
    printf("%.2lf градусов Фаренгейта = %.2lf градусов Цельсия и\n"
           "%.2lf градусов Кельвина.\n", degresFahrenheit,
            Celsius, Kelvin);
}
