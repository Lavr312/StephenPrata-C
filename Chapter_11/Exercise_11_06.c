/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.6                  **
 * ***********************************************
 */

#include <stdio.h>
char *isWithin(const char *array, char find);

int main()
{
    char word[10];
    char *find;
    
    while (fgets(word, 10, stdin) && word[0] != '\n')
    {
        find = isWithin(word, 'H');
        if (find)
            printf("%c\n", *find);
        else
            puts("Not find");
    }
    
	return 0;
}
char *isWithin(const char *array, char find)
{
	int i = 0;
	
	while (array[i] && array[i] != find)
        i++;
    if (array[i])
        return (char *) array + i;
    else
        return NULL;
}