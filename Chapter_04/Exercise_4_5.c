/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 4.5                   **
 *************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#define BIT_PER_BYTE 8

int main()
{
    float downloadSpeed, downloadTime, fileSize;

    system("chcp 1251>0");
    printf("Укажите скорость загрузки в мегабитах в секунду\n");
    scanf("%f", &downloadSpeed);
    printf("Укажите размер файла в мегабайтах\n");
    scanf("%f", &fileSize);
    downloadTime = fileSize/(downloadSpeed/BIT_PER_BYTE);
    printf("При скорости загрузки %.2f мегабит в секунду файл "
           "размером %.2f мегабайт\nзагружается за %.2f секунд(ы).\n",
           downloadSpeed, fileSize, downloadTime);

    return 0;
}
