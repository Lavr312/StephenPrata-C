/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.9                  **
 * ***********************************************
 */

#include <stdio.h>
#include <string.h>
void reverseString(char *str);
char *inputString(char *words, int stlen, int enter, int afterZero);

int main()
{
    char word[15];
    
    while (inputString(word, 15, 1, 1))
    {
        reverseString(word);
        printf("%s\n", word);
    }
    
	return 0;
}
void reverseString(char *str)
{
    int N = strlen(str);
    char t;
    
    for (int i = 0; i < (N / 2); i++)
    {
        t = str[i];
        str[i] = str[N - i - 1];
        str[N - i - 1] = t;
    }
}
char *inputString(char *words, int stlen, int enter, int afterZero)
{
	int i = 0;
	char *ret_val;

	ret_val = fgets(words, stlen, stdin);

	if (!ret_val || words[0] == '\n')
		return NULL;
	while (i < stlen && words[i] != '\n' && words[i] != '\0')
		i++;
	if (words[i] == '\0')   /* Если ввод не умещается, то отбрасываем остаток */
		while (getchar() != '\n')
			continue;
	else if (words[i] == '\n' && enter) /* Убираем \n если ввод поместился */
		words[i] = '\0';

	while ((i < stlen - 1) && afterZero)   /* Зануляем символы после \0 */
    {
        i++;
        words[i] = '\0';
    }

	return ret_val;
}