/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 12.9                  **
 * ***********************************************
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int show_array(char *const *const ar, const int size);

int main(void)
{
    int size;
    char **p_to_p;
    char buf[100];
    printf("Введите количество слов (<1 для завершения):\n");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        while (getchar() != '\n')
            continue;

        p_to_p = (char **) malloc(size * sizeof(char *));
        printf("Введите %d слов:\n", size);
        for (int i = 0; (i < size) && (scanf("%99s", buf) == 1); i++)
        {
            while (getchar() != '\n')
                continue;

            p_to_p[i] = (char *) malloc((strlen(buf) + 1) * sizeof(char));
            strcpy(p_to_p[i], buf);
        }
        show_array(p_to_p, size);
        for (int i = 0; i < size; i++)
          free(p_to_p[i]);
        free(p_to_p);
        printf("Введите количество слов (<1 для завершения):\n");
    }
    printf("Программа завершена.\n");

    return 0;
}
int show_array(char *const *const ar, const int size)
{
    int n;

    for (int i = 0; i < size; i++)
        n = printf("%s\n", ar[i]);
    printf("\n");

    return n;
}
