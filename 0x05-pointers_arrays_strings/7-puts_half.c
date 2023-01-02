#include "main.h"

/**
 * puts_half - prints every other character of string
 * @str: a pointer to an int that will be changed
 *
 * Retunr: void which means our answer is correct
 */
void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
}
