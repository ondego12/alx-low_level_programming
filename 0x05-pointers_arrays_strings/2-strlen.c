/*
 * File: 2-strlen.c
 * Auth: ondego
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
