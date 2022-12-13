#include <stdio.h>

/**
 * main - Entrry point
 * Description: Print all single digit and a new line from 0 to 9
 * Return: return (0) on success
 */
int main(void)
{	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
