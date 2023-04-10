/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 13.9                  **
 * ***********************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
    int number_word;
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy", "a+b")) == NULL)
    {
        printf("Не удалось открыть файл \"wordy\"\n");
        exit(EXIT_FAILURE);
    }
    fseek(fp, 0L, SEEK_END);
    for (int i = ftell(fp) - 1L; i > 0L; i--)
    {
        fseek(fp, i, SEEK_SET);
        if (getc(fp) == '$')
        {
            fseek(fp, i + 1L, SEEK_SET);
            break;
        }
    }
    if (fscanf(fp, "%d", &number_word) == 0)
        number_word = 5;
    else
        number_word++;

    if (number_word < 1 || (ftell(fp) == 0))
        number_word = 1;
    puts("Введите слова для добавления в файл, для завершения");
    puts("введите символ # в начале строки.");
    while ((scanf("%40s", words) == 1) && (words[0] != '#'))
    {
        fprintf(fp, "%s $%d\n", words, number_word);
        number_word++;
    }
    if (fclose(fp) != 0)
        puts("Ошибка при закрытии файла \"wordy\"\n");

    return 0;
}
