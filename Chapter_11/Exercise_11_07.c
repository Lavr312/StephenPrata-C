/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.7                  **
 * ***********************************************
 */

#include <stdio.h>
char *myStrncpy(char *s1, const char *s2, int N);
char *inputString(char *words, int stlen, int enter, int afterZero);

int main()
{
    char word[10], str1[5];
    char *input;
    
    while (inputString(word, 10, 1, 1))
    {
        input = myStrncpy(str1, word, 5);
        if (input)
            printf("%s\n", input);
        else
            puts("Not copy.");
    }
    
	return 0;
}
char *myStrncpy(char *s1, const char *s2, int N) /* s2 -> s1 (N) */
{
    int i = 0;
    
	if (!(*s2))
        return NULL;
    
    while (s2[i] && i < (N - 1))
    {
        s1[i] = s2[i];
        i++;
    }
    while (i < (N - 1)) /* Дополняем нулями если s2 < s1 */
    {
        s1[i] = '\0';
        i++;
    }
    s1[N - 1] = '\0'; /* Если s2 > s1 */
    
    return (char *) s1;
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