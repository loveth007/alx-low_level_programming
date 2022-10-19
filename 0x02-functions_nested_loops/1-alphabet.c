#include "main.h"

/**
 * print_alphabet - print alpha im lowercase followed by a new line
 */
void print_alphabet(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
		_putchar(lo);

	_putchar('\n');
}
