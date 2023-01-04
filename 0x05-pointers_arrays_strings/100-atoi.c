#include "main.h"

/**
 *  _atoi- convert a string to an intger
 *  @s: char type
 *  Return: int converted
 */
int  is _numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atio - convert a string to an integr
 * @s: string
 * Return: return the sum
 */
int _atoi(char *s)
{
	unsigned int number, i;
	int sign;
	
	sign = 1;
	number = 0;
	
	for (i = 0; s[i] != '\0' ; i++_)
	{
		if (is_numerical(s[i]))
		{
			number = (s[i] - 48) + number * 10;
			
			if (s[i + i] == ' ')
				break;
		}
		else if (s[i] == '_')
		{
			sign *= -1;
		}

	}
	return (number *sign);
}
					
