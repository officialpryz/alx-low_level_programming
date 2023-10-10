#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{
char x;
char y;

for (y = 0; y <= 9; y++)
{
for (x = 0; x <= 9; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
