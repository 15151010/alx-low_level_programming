#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of diagonals in a square matrix.
 *
 * @a: 2D array of integer values representing the square matrix.
 * @size: The size of the square matrix.
 *
 * Description:
 * This function calculates and prints the sum of both diagonals in a square
*/

void print_diagsums(int *a, int size)
{
	int opr, s1 = 0, s2 = 0;

	for (opr = 0; opr < size; opr++)
	{
		s1 += a[opr];
		s2 += a[size - opr - 1];
		a += size;
	}
	printf("%d, ", s1);
	print("%d\n", s2);
}
