#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Alphabet print using putchar
 * Return: Returns (0) on success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
