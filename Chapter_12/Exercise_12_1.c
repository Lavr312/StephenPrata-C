/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 12.1                  **
 * ***********************************************
 */
#include <stdio.h>
void critic(int *units);
int main(void)
{
	int units = 0;

	printf("Сколько фунтов весит маленький бочонок масла?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(&units);
	printf("Верно\n");

    return 0;
}
void critic(int *units)
{
	printf("Неправильно\n");
	scanf("%d", units);
}
