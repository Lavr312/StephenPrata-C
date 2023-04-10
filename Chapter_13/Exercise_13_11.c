/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.11                 **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *s_gets(char *si, int n, FILE *file);

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[61];

    if ((argc < 3) || (strlen(argv[1]) > 11))
    {
        printf("Неправильные аргументы\n");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while (s_gets(str, 61, fp))
    {
        if (strstr(str, argv[1]))
            printf("%s\n", str);
    }

    if (fclose(fp) != 0)
        printf("Не удалось закрыть файл %s\n", argv[2]);

    return 0;
}
char *s_gets(char *si, int n, FILE *file)
{
    char *ret_val, *find;

    ret_val = fgets(si, n, file);
    if (ret_val)
    {
        /* Если пустая строка */
        if (si[0] == '\n')
            return NULL;

        find = strchr(si, '\n');
        if (find)
            *find = '\0';
        else
            while (getc(file) != '\n')
                continue;
    }

    return ret_val;
}
