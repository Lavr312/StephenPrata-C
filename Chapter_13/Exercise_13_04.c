/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.4                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch;
    FILE *fi[argc - 1];

    if (argc < 2)
        exit(EXIT_FAILURE);
    for (int i = 0; i < argc - 1; i++)
    {
        if ((fi[i] = fopen(argv[i + 1], "r")) == NULL)
        {
            printf("Не удалось открыть файл %s\n", argv[i + 1]);
            exit(EXIT_FAILURE);
        }
        while ((ch = getc(fi[i])) != EOF)
            putc(ch, stdout);
        putc('\n', stdout);
    }
    for (int i = 0; i < argc - 1; i++)
        fclose(fi[i]);

    return 0;
}
