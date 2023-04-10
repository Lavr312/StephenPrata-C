/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.6                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 20
char *s_gets(char *si, int n);

int main(void)
{
    FILE *in, *out;
    int ch, count = 0;
    char name_in[LEN], name_out[LEN];

    printf("Введите имя файла: ");
    s_gets(name_in, LEN);

    if ((in = fopen(name_in, "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", name_in);
        exit(EXIT_FAILURE);
    }
    strncpy(name_out, name_in, LEN - 5);
    name_out[LEN - 5] = '\0';
    strcat(name_out, ".red");
    if ((out = fopen(name_out, "w")) == NULL)
    {
        printf("Не удалось открыть файл 5s\n", name_out);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(in)) != EOF)
    {
        if (count % 3 == 0)
            putc(ch, out);
        if (ch != '\n')
            count++;
    }
    if (fclose(in) != 0 || fclose(out) != 0)
        printf("Ошибка при закрытии файла.\n");

    return 0;
}
char *s_gets(char *si, int n)
{
    char *ret_val, *find;

    ret_val = fgets(si, n, stdin);
    if (ret_val)
    {
        find = strchr(si, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
