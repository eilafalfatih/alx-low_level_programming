#include <stdio.h>
#include <stdio.h>

/**
 * main - main block
 * Description: write a program that prints all possible
 * different combinations of two digits
 * numbers must be seprated by ,, followed by a space
 * The two digit must be different
 * 01 and 10 are considired the same combination of two digits 0 and 1
 * print only the smallest combination of two digits
 * number should be printed in ascending order, with two digits
 * you can only use the putchar function
 * (every other function (printf, put, etc..) is forbidden)
 * you can only allowed to use any variable of type char
 * all your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;

	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
