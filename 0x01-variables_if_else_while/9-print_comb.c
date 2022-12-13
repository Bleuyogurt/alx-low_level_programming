#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing numbers from 0 - 9 then a new line
 * Return: return (0) on success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
