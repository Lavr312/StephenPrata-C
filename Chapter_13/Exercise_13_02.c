/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.2                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch;
    FILE *fi, *fo;

    if (argc != 3)
        exit(EXIT_FAILURE);
    if ((fi = fopen(argv[1], "rb")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fo = fopen(argv[2], "wb")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fi)) != EOF)
        putc(ch, fo);
    fclose(fi);
    fclose(fo);

    return 0;
}
