#include "main.h"

/**
 * infinite_add - Add two numbers as strings, considering buffer size.
 *
 * @n1: The first number (string) to add.
 * @n2: The second number (string) to add.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 * Description: This function adds two numbers
 * that the result fits within the provided buffer size (size_r).
 *
 * Return: A pointer to the result (r) or 0 if there is an overflow.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* local variable declaration*/
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[1] = '\0';
	for (k = l - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			s = n1[i] - '\0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '\0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '\0';
	}
	return (r);
}

