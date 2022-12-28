#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success/correct)
 */
int positive_or_negative(int i)
{

	if (i == 0)
	{
		printf("%i is zero\n", i);
	}

	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}

	else
	{
		printf("%i is positive\n", i);
	}

	return (0);
}

