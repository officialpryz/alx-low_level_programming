#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers to 98
 *
 * @n: greater than 98
 *
 * Return: always 0
 *
 */
void print_to_98(int n)
{
int i;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
