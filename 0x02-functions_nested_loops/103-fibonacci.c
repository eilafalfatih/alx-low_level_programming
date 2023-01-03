#include <stdio.h>

/**
 * main - main block
 * description - computes and print even number < 4,00,00
 * 5 below 1024, followed by a new line
 * return : 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
