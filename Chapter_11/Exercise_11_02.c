/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.2                  **
 * ***********************************************
 */

#include <stdio.h>
void inputNChar(char *array, int N);

int main()
{
    char array[5];
    
    inputNChar(array, 5);
    printf("==%s\n", array);
    
	return 0;
}
void inputNChar(char *array, int N)
{
    int i, input = 0;

    for (i = 0; (input = getchar()) && i < N; i++)
    {
        if (input == '\n' || input == '\t' || input == ' ')
            break;
        else
            array[i] = input;
    }
    if (i >= N)
        array[N - 1] = '\0';
    else
        array[i] = '\0';
}
