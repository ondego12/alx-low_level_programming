#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, j;
	

	for( n=0; n<8; n++)
	{
		for(i=n+1; i<9; i++)
		{
			for(j=i+1; j<10;j++)
			{
				putchar((n%10) + '0');
				putchar((i%10) + '0');
				putchar((j%10) + '0');
				if ( n ==7 && i ==8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return(0);

}
