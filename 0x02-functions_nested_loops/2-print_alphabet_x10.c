#include "main.h"

/**
 * print_alphabet_x10.c - print 10 times the aphabets
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i++ <= 9)
	{

	for (ch = 'a' ; ch <= 'z'; ch++)

		_putchar(ch);

	_putchar('\n');

	}




}

