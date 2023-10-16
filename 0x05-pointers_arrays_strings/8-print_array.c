#include"main.h"

/**
 * print_array - Prints the elements of an integer array.
 * array: Pointer to the array.
 * size: Number of elements in the array.
 * @n: elenents paraneter input
 * @a: string parmeter input
 * This function prints the elements of the given integer array, separated
 * by commas.
 *
 * Rutarn: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
