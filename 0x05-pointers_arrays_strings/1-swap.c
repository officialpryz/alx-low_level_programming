#include "main.h"
/**
 * swap_int - swap integer
 *
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
int c = *b;
int d = *a;
*a = c;
*b = d;
}
