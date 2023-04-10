/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.1                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch;
    unsigned long count = 0;
    FILE *fp;
    char name_file[10];

    if (argc != 1)
        exit(EXIT_FAILURE);
    scanf("%9s", name_file);
    if ((fp = fopen(name_file, "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", name_file);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("Файл %s содержит %lu символов\n", name_file, count);

    return 0;
}
