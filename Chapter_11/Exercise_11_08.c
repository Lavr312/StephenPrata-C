/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.8                  **
 * ***********************************************
 */

#include <stdio.h>
char *myStringIn(const char *s1, const char *s2, int N);
char *inputString(char *words, int stlen, int enter, int afterZero);

int main()
{
    char word[15];
    char *input;
    
    while (inputString(word, 15, 1, 1))
    {
        input = myStringIn(word, "123", 0);
        if (input)
            printf("%s\n", input);
        else
            puts("Not find.");
    }
    
	return 0;
}
char *myStringIn(const char *s1, const char *s2, int N) /* Find s2 in s1, N == 0 -> Not N*/
{
    char *Out = NULL;
    int iS1 = 0, iS2 = 0;
    
    while (s1[iS1] && s2[iS2] && (!N || (iS2 < N)))
    {
        if (s1[iS1] == s2[iS2])
        {
            if (Out == NULL)
                Out = (char *) s1 + iS1;
            iS1++; iS2++;
        }
        else if (Out) /* Найден не весь фрагмент s2 */
        {
            Out = NULL;
            iS2 = 0;
        }
        else
            iS1++;
    }
    if (s2[iS2] && (!N || (iS2 < N)))
        return NULL;

    return Out;
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