/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.7                   **
 *************************************************
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char word[16];

    system("chcp 1251>0"); // windows encoding
    printf("Введите слово(до 15 символов)\n");
    scanf("%15s", word);
    unsigned int max = strlen(word);
    for (int i = 0; i < max; i++)
    {
        printf("%c", word[max-1-i]);
    }

    return 0;
}
