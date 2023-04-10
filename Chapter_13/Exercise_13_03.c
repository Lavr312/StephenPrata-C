/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.3                  **
 * ***********************************************
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fi, *fo;
    char name_file_input[10], name_file_output[10];

    printf("Введите имена файла ввода и вывода: ");
    scanf("%9s", name_file_input);
    scanf("%9s", name_file_output);

    if ((fi = fopen(name_file_input, "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", name_file_input);
        exit(EXIT_FAILURE);
    }
    if ((fo = fopen(name_file_output, "w")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", name_file_output);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fi)) != EOF)
        putc(toupper(ch), fo);
    fclose(fi);
    fclose(fo);

    return 0;
}
