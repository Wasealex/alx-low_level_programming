#include "main.h"
/**
 *swap_int - swaps two intigers
 *@a: first intiger pointer
 *@b: second intiger pointer
 *Return: swaped numbers
 */
void swap_int(int *a, int *b)
{
	int p, q;

	p = *a;
	q = *b;
	*a = q;
	*b = p;
}
