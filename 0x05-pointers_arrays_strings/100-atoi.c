#include"main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The input string to be converted.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	nusigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
