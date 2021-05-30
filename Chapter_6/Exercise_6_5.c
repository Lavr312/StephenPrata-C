/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 6.5                   **
 *************************************************
 */

#include <stdio.h>

int main()
{
    int max = 0;
    char letter;

    //system("chcp 1251>0"); // windows encoding
    printf("Введите прописную английскую букву\n");
    letter = getchar();
    max = letter - 'A';
    for (int i = 0; i <= max; i++)
    {
        for (int a = 0; a < (max - i); a++)
            printf(" ");
        for (int a = 0; a <= i; a++)
            printf("%c", 'A' + a);
        for (int a = i; a > 0; a--)
            printf("%c", 'A' + a - 1);
        printf("\n");
    }

    return 0;
}
