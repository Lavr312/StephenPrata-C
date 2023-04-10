/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.5                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main(int argc, char *argv[])
{
    int i;
    long pos;
    double numbers[ARSIZE];
    double value;
    FILE *iofile;

    if (argc != 2)
        exit(EXIT_FAILURE);

    for (int i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
    if ((iofile = fopen(argv[1], "wb")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    fwrite(numbers, sizeof (double), ARSIZE, iofile);
    fclose(iofile);
    if ((iofile = fopen(argv[1], "rb")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    printf("Введите индекс 0 - %d\n", ARSIZE - 1);
    while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
    {
        pos = (long) i * sizeof (double);
        fseek(iofile, pos, SEEK_SET);
        fread(&value, sizeof (double), 1, iofile);
        printf("Значение = %.2lf\n", value);
        printf("Введите индекс 0 - %d\n", ARSIZE - 1);
    }
    fclose(iofile);
    puts("Программа завершена.");

    return 0;
}
