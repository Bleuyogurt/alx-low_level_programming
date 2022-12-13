#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets from a to Z
 * Return: Return (0) on success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
