/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 3.4                   **
 * ***********************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double count;

    system("chcp 1251>0");
    printf("������� �������� � ��������� �������: ");
    scanf("%lf", &count);
    printf("\n������ � ������������� �������: %lf\n", count);
    printf("���������������� ����� ������: %e\n", count);
    printf("�������-���������������� �������������: %a\n", count);

    return 0;
}
