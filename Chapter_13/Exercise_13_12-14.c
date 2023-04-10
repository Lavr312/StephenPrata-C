/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.14                 **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *s_gets(char *si, int n, FILE *file);
char define_shadow(int ch);
void interference(int m, int n, int array[m][n]);

int main(int argc, char *argv[])
{
    int ch, size_str = 0, number_enter = 0;;
    FILE *fr, *fw;
    char str_input[31];

    if (argc < 2)
    {
        printf("Недостаточно аргументов\n");
        exit(EXIT_FAILURE);
    }
    if ((fr = fopen(argv[1], "r")) == NULL)
    {
        printf("Не удалось открыть файл %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fr)) != EOF) /* Определяем кол-во строк и их размер в файле */
    {
        size_str++;
        if (ch == '\n')
            number_enter++;
    }
    rewind(fr);
    if ((size_str < 20) || (number_enter < 2))
    {
        printf("Неправильные данные в файле\n");
        fclose(fr);
        exit(EXIT_FAILURE);
    }
    size_str = (size_str / 2) / number_enter; /* Кол-во символов в строке */

    int array_for_file_int[number_enter][size_str]; /* Массив переменной длины */
    char array_for_file_ch[number_enter][size_str + 1];

    for (int i = 0; i < number_enter; i++)
    {
        s_gets(str_input, 31, fr);
        for (int ch_in_str = 0; ch_in_str < size_str; ch_in_str++)
            array_for_file_int[i][ch_in_str] = atoi(&str_input[ch_in_str * 2]);
    }

    interference(number_enter, size_str, array_for_file_int); /* Устранение помех */

    for (int i = 0; i < number_enter; i++)
    {
        for (int ch_in_str = 0; ch_in_str < size_str; ch_in_str++)
            array_for_file_ch[i][ch_in_str] = define_shadow(array_for_file_int[i][ch_in_str]);
        array_for_file_ch[i][size_str] = '\0'; /* Добавляем символ конца строки */
        puts(array_for_file_ch[i]); /* Вывод массива на экран */
    }

    if (fclose(fr) != 0)
        printf("Не удалось закрыть файл\n");

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
char define_shadow(int ch)
{
    char out = '#'; /* '#' == 8, 9 */

    if (ch == 0)
        return ' ';

    switch (ch)
    {
        case 1:
            out = '.';
            break;
        case 2:
            out = '*';
            break;
        case 3:
            out = '~';
            break;
        case 4:
            out = '^';
            break;
        case 5:
            out = '+';
            break;
        case 6:
            out = '%';
            break;
        case 7:
            out = '@';
            break;
    }

    return out;
}
void interference(int m, int n, int array[m][n])
{
    int average;

    for (int in_m = 0; in_m < m; in_m++)
    {
        for (int in_n = 0; in_n < n; in_n++)
        {
            if ((in_n > 0) && (in_n < n - 1) && (in_m > 0) && (in_m < m - 1)) /* Центр */
            {
                average = (array[in_m][in_n - 1] + array[in_m][in_n + 1] + array[in_m - 1][in_n] + array[in_m + 1][in_n]) / 4;
                if (abs(average - array[in_m][in_n]) > 1)
                    array[in_m][in_n] = average;
            }
            else if ((in_m > 0) && (in_m < m - 1)) /* Вертикальная сторона */
            {
                if (in_n == 0) /* Левая */
                {
                    average = (array[in_m - 1][in_n] + array[in_m + 1][in_n] + array[in_m][in_n + 1]) / 3;
                    if (abs(average - array[in_m][in_n]) > 1)
                        array[in_m][in_n] = average;
                }
                else if (in_n == n - 1) /* Правая */
                {
                    average = (array[in_m - 1][in_n] + array[in_m + 1][in_n] + array[in_m][in_n - 1]) / 3;
                    if (abs(average - array[in_m][in_n]) > 1)
                        array[in_m][in_n] = average;
                }
            }
            else if ((in_n > 0) && (in_n < n - 1)) /* Горизонтальная сторона */
            {
                average = (array[in_m][in_n - 1] + array[in_m][in_n + 1]) / 2;
                if (abs(average - array[in_m][in_n]) > 1)
                    array[in_m][in_n] = average;
            }
            else if (in_n == 0) /* Левый угол */
            {
                if (in_m == 0) /* Верхний угол */
                {
                    average = (array[in_m + 1][in_n] + array[in_m][in_n + 1]) / 2;
                    if (abs(average - array[in_m][in_n]) > 1)
                        array[in_m][in_n] = average;
                }
                else if (in_m == m - 1) /* Нижний угол */
                {
                    average = (array[in_m - 1][in_n] + array[in_m][in_n + 1]) / 2;
                    if (abs(average - array[in_m][in_n]) > 1)
                        array[in_m][in_n] = average;
                }
            }
            else if (in_n == n - 1) /* Правый угол */
            {
                if (in_m == 0) /* Верхний угол */
                {
                    average = (array[in_m + 1][in_n] + array[in_m][in_n - 1]) / 2;
                    if (abs(average - array[in_m][in_n]) > 1)
                        array[in_m][in_n] = average;
                }
                else if (in_m == m - 1) /* Нижний угол */
                {
                    average = (array[in_m - 1][in_n] + array[in_m][in_n - 1]) / 2;
                    if (abs(average - array[in_m][in_n]) > 1)
                        array[in_m][in_n] = average;
                }
            }
        }
    }
}
