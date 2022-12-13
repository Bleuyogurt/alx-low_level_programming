#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all numbers from 0 - 9 and then new line
 * Return: Return (0) on success
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
