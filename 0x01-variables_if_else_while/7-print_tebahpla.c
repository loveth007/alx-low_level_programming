#include <stdio.h>

/**
 * main - print alpha lowercase in reverse
 * Return: 0
 */
int main(void)
{
	char lo;

	for (lo = 'z'; lo >= 'a'; lo--)
		putchar(lo);

	putchar('\n');

	return (0);
}
