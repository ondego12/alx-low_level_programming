#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i+1; j < 9; j++)
		{
			putchar((i%10) + '0');
			putchar((j%10) + '0');
			
			if ( i ==9 && j == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return(0);
}
