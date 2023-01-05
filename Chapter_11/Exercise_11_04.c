/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.4                  **
 * ***********************************************
 */

#include <stdio.h>
char *inputString(char *array, int stlen);

int main()
{
    char word[10];
    
    inputString(word, 10);
    printf("%s\n", word);

	return 0;
}
char *inputString(char *array, int N)
{
	int i = 0, input = 0;

    while ((input = getchar()) && i < N)
    {
        if (input == '\n' || input == '\t' || (input == ' ' && i != 0))
            break;
        else if (input == ' ') /* Пропускаем ведущие пробельные символы */
            continue;
        else
        {
            array[i] = input;
            i++;
        }
    }
    
    if (i >= N)
        array[N - 1] = '\0';
    else
        array[i] = '\0';
}