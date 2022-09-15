#include "main.h"

/**
 * int _isalpha(int c) - checks lowercase c
 *
 * Return: 1 or else return 0
 */
int int _isalpha(int c)
{

	for (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
