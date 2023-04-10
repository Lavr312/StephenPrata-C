/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.7                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 20
char *s_gets(char *si, int n, FILE *file);

int main(int argc, char *argv[])
{
    FILE *in1, *in2;
    char *out_sgets1, *out_sgets2;
    char str[LEN];

    if ((in1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((in2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    out_sgets1 = s_gets(str, LEN, in1);
    if (out_sgets1)
        printf("%s - ", str);
    out_sgets2 = s_gets(str, LEN, in2);
    if (out_sgets2)
        printf("%s\n", str);
    while (out_sgets1 || out_sgets2)
    {
        if (out_sgets1)
        {
            out_sgets1 = s_gets(str, LEN, in1);
            if (out_sgets1)
                printf("%s", str);
        }
        if (out_sgets2)
        {
            out_sgets2 = s_gets(str, LEN, in2);
            if (out_sgets1 && out_sgets2)
                printf(" - %s\n", str);
            else if (out_sgets2)
                printf("%s\n", str);
        }
        else
            printf("\n");
    }

    if (fclose(in1) != 0 || fclose(in2) != 0)
        printf("Ошибка при закрытии файла.\n");

    return 0;
}
char *s_gets(char *si, int n, FILE *file)
{
    char *ret_val, *find;

    ret_val = fgets(si, n, file);
    if (ret_val)
    {
        find = strchr(si, '\n');
        if (find)
            *find = '\0';
        else
            while (getc(file) != '\n')
                continue;
    }

    return ret_val;
}
