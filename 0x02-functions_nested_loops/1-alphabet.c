#include "main.h"

/**
 * print_alpahbet - entry point
 *
 * description : ' it print alphabets'
 *
 * Return : 0 (sucess)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
