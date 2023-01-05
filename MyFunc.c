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
char *findChar(const char *array, char find)
{
	int i = 0;
	
	while (array[i] && array[i] != find)
        i++;
    if (array[i])
        return (char *) array + i;
    else
        return NULL;
}
char *myStrncpy(char *s1, const char *s2, int N) /* s2 -> s1 (N) */
{
    int i = 0;
    
	if (!(*s2))
        return NULL;
    
    while (s2[i] && i < N)
    {
        s1[i] = s2[i];
        i++;
    }
    while (i < N)
    {
        s1[i] = '\0';
        i++;
    }
    
    return (char *) s1;
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