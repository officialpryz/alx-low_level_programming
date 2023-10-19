#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
int i;
int d;

for (i = 0; i < n / 2; i++)
{
d = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = d;
}
}
