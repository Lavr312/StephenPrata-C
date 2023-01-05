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
#define LENSTR 15
#define LENARRAY 5

int outputMenu(void);
void outputSort(char (*word) [LENSTR]);
void outputSortASCII(char (*word) [LENSTR]);
void outputSortLen(char (*word) [LENSTR]);
void outputSortLenOneWord(char (*word) [LENSTR]);
int lenWord(char *string);
char *inputString(char *words, int stlen, int enter, int afterZero);

int main(void)
{
    int i = 0;
    char word[LENARRAY][LENSTR];
    
    while (i < LENARRAY && inputString(word[i], LENSTR, 1, 1))
        i++;
    outputMenu();
    outputSort(word); /* Выбор варианта сортировки */
    
	return 0;
}
int outputMenu(void)
{
    puts("1) Исходный список\n" \
    "2) ASCII\n" \
    "3) Согласно длине строки\n" \
    "4) Согласно длине первого слова\n" \
    "5) Выход из программы.");
}
void outputSort(char (*word) [LENSTR])
{
    int n;
    
    while (scanf("%d", &n))
    {
        switch (n)
        {
            case 1:
                for (int i = 0; i < LENARRAY; i++)
                    puts(word[i]);
                break;
            case 2:
                outputSortASCII(word);
                break;
            case 3:
                outputSortLen(word);
                break;
            case 4:
                outputSortLenOneWord(word);
                break;
            case 5:
                puts("Goodbye");
                break;
        }
        if (n == 5)
            break;
        puts("---");
    }
}
void outputSortASCII(char (*word) [LENSTR]) /* сортировка через strcmp */
{
    char *sortStr[LENARRAY], *t;
    
    for (int i = 0; i < LENARRAY; i++)
        sortStr[i] = word[i];
    for (int one = 0; one < LENARRAY - 1; one++) /* Сортировка выбором */
    {
        for (int two = one + 1; two < LENARRAY; two++)
            if (strcmp(sortStr[one], sortStr[two]) > 0)
            {
                t = sortStr[one];
                sortStr[one] = sortStr[two];
                sortStr[two] = t;
            }
    }
    for (int i = 0; i < LENARRAY; i++)
        puts(sortStr[i]);
}
void outputSortLen(char (*word) [LENSTR]) /* Сортировка по длине */
{
    char *sortStr[LENARRAY], *t;
    
    for (int i = 0; i < LENARRAY; i++)
        sortStr[i] = word[i];
    for (int one = 0; one < LENARRAY - 1; one++) /* Сортировка выбором */
    {
        for (int two = one + 1; two < LENARRAY; two++)
            if (strlen(sortStr[one]) > strlen(sortStr[two]))
            {
                t = sortStr[one];
                sortStr[one] = sortStr[two];
                sortStr[two] = t;
            }
    }
    for (int i = 0; i < LENARRAY; i++)
        puts(sortStr[i]);
}
void outputSortLenOneWord(char (*word) [LENSTR]) /* Сортировка по длине первого слова */
{
    char *sortStr[LENARRAY], *t;
    
    for (int i = 0; i < LENARRAY; i++)
        sortStr[i] = word[i];
    for (int one = 0; one < LENARRAY - 1; one++) /* Сортировка выбором */
    {
        for (int two = one + 1; two < LENARRAY; two++)
            if (lenWord(sortStr[one]) > lenWord(sortStr[two]))
            {
                t = sortStr[one];
                sortStr[one] = sortStr[two];
                sortStr[two] = t;
            }
    }
    for (int i = 0; i < LENARRAY; i++)
        puts(sortStr[i]);
}
int lenWord(char *string)
{
    int i = 0;
    
    while (string[i] && string[i] != ' ' && string[i] != '\n')
        i++;
    return i;
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