/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 8.2                   **
 * ***********************************************
 */
#include <stdio.h>

void Output(int ch);

int main()
{
    int ch, k=0;

    system("chcp 1251>0"); // windows encoding
    while ((ch = getchar()) != EOF)
    {
        Output(ch);
        k++;
        if (k%10 == 0)
            printf("\n");
        else
            printf(" ");
    }
    printf("\nk = %d\n", k);

    return 0;
}

void Output(int ch)
{
    if (ch > ' ')
        printf("%c = %d", ch, ch);

    if (ch == ' ')
        printf("\'_\' = %d", ch);
    if (ch == '\n')
        printf("\\n = %d", ch);
    if (ch == '\t')
        printf("\\t = %d", ch);

    if  ((ch < ' ') && (ch != '\n') && (ch != '\t') && (ch != ' '))
        printf("Ctrl = %d", ch);
}
