/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.10                 **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *s_gets(char *si, int n, FILE *file);

int main(void)
{
    int ch;
    long pos, max;
    FILE *fp;
    char file_name[21];

    printf("Введите имя файла:\n");
    while (s_gets(file_name, 21, stdin) == NULL)
        printf("Файл не найден\n");
    if ((fp = fopen(file_name, "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    fseek(fp, 0L, SEEK_END);
    max = ftell(fp);
    printf("Введите позиция в файле:\n");
    while ((scanf("%ld", &pos) == 1) && (pos >= 0L) && (pos < max))
    {
        if (fseek(fp, pos, SEEK_SET) != -1)
        {
            while ((ch = getc(fp)) != '\n')
                putc(ch, stdout);
            putc('\n', stdout);
        }
        else
            printf("Неправильная позиция\n");
        printf("Введите позицию в файле (-1 для завершения):\n");
    }

    if (fclose(fp) != 0)
        printf("Ошибка при закрытии файла %s\n", file_name);
    else
        printf("Программа завершена\n");

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
