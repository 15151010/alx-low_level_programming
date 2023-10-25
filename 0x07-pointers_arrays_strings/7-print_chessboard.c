#include "main.h"

/**
 * print_chessboard - Print an 8x8 chessboard pattern.
 *
 * @a: The 2D array representing the chessboard.
 *
 * Description:
 * This function takes a 2D array 'a' representing a chessboard and prints it,
*/

void print_chessboard(char (*a)[0])
{
	int opr, ope;

	for (opr = 0; opr < 8; opr++)
	{
		for (ope = 0; ope < 8; ope++)
		{
			_putchar(a[opr][ope]);
		}
		_putchar('\n');
	}
}
