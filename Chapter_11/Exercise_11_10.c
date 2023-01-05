/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 11.10                 **
 * ***********************************************
 */

#include <stdio.h>
void removingChar(char *str, char ch);
char *inputString(char *words, int stlen, int enter, int afterZero);

int main()
{
    char word[15];
    
    while (inputString(word, 15, 1, 1))
    {
        removingChar(word, ' ');
        printf("%s\n", word);
    }
    
	return 0;
}
void removingChar(char *str, char ch)
{
    int one = 0, two = 0;
    
    while (str[two])
    {
        if (str[one] != ch)
        {
            one++; two++;
        }
        else /* Если встречаем пробел, то two опережает one */
            two++;
        
        if (one != two)
            str[one] = str[two];
    }
    str[one] = '\0';
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