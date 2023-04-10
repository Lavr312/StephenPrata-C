/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.8                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MARKER "Ctrl + D"
char *s_gets(char *si, int n, FILE *file);

int main(int argc, char *argv[])
{
    int i = 2;      /* имя первого файла */
    int number_of_char = 0; /* Сколько раз символ argv[1][0] встречается в файле */
    FILE *file;
    char input[20];

    if (argc < 2)
    {
        printf("Укажите символ\n");
        exit(EXIT_FAILURE);
    }
    if (argc < 3)
        file = stdin;
    else
    {
        /* Первая попытка открыть файл */
        for (; i < argc; i++)
        {
            if ((file = fopen(argv[i], "r")) == NULL)
                printf("Не удалось открыть файл %s\n", argv[i]);
            else
                break;
        }
        if (i == argc)
        {
            printf("Не удалось открыть указанные файлы\n");
            exit(EXIT_FAILURE);
        }
    }

    while (i < argc || argc < 3)
    {
        number_of_char = 0;

        if (argc < 3)
            printf("Введите строку (%s для завершения)\n", MARKER);
        while (s_gets(input, 20, file))
            for (int p = 0; input[p] != '\0'; p++) /* Поиск символа в строке */
                if (input[p] == argv[1][0])
                    number_of_char++;
        if (argc < 3)
        {
            printf("Символ %c встречается %d раз\n", argv[1][0], number_of_char);
            break;
        }
        else
        {
            printf("Символ %c встречается %d раз в файле %s\n", argv[1][0], number_of_char, argv[i]);
            /* Открываем следующий файл */
            i++;
            fclose(file);
            while(i < argc)
            {
                if ((file = fopen(argv[i], "r")) == NULL)
                    printf("Не удалось открыть файл %s\n", argv[i++]);
                else
                    break;
            }
            if (i == argc)
                exit(EXIT_FAILURE);
        }
    }
    if (fclose(file) != 0)
    {
        printf("Не удалось закрыть файл.\n");
        exit(EXIT_FAILURE);
    }
    printf("Программа завершена.\n");

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
