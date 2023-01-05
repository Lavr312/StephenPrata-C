/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.1                  **
 * ***********************************************
 */

#include <stdio.h>
char *inputNChar(char *array, int N);

int main()
{
    char array[5];

    while (inputNChar(array, 5))
        printf("%s\n", array);

	return 0;
}
char *inputNChar(char *array, int N)
{
    char *retVal;
    int i = 0;

    retVal = fgets(array, N, stdin);
    if (!retVal || array[0] == '\n')
        return NULL;
    while (i < N && array[i] != '\n' && array[i] != '\0')
		i++;
	if (array[i] == '\0') /* Если ввод не умещается, то отбрасываем остаток */
		while (getchar() != '\n')
			continue;
	/*else if (array[i] == '\n')
		array[i] = '\0';*/
    while (i < N - 1)   /* Зануляем символы после \0 */
    {
        i++;
        array[i] = '\0';
    }
}
