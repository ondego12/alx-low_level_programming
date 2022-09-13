/*
 * file: 1-alphabet.c
 * Auth: Brian ondego
 */

#include "main.h"

/**
 * prints the alphabets in lowercase followed by a new line.
 */

void print_alphabet(void)
{
	char ch;

	for (ch='a' ; ch<='z'; ch++)
		putchar(ch);
	        putchar('\n');

}		
