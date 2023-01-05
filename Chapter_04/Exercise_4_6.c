/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.6                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char lastName[20], firstName[20];
    size_t lenghtLastName, lenghtFirstName;

    system("chcp 1251>0");
    printf("Напишите своё имя\n");
    scanf("%19s", lastName);
    printf("Напишите свою фамилию\n");
    scanf("%19s", firstName);
    lenghtLastName = strlen(lastName);
    lenghtFirstName = strlen(firstName);
    printf("%s %s\n", lastName, firstName);
    printf("%*zu %*zu\n", lenghtLastName, lenghtLastName,
           lenghtFirstName, lenghtFirstName);
    printf("%s %s\n", lastName, firstName);
    printf("%*zu %*zu\n", -lenghtLastName, lenghtLastName,
           -lenghtFirstName, lenghtFirstName);

    return 0;
}
