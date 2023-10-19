#include "main.h"
/**
 * string_toupper - uppers a lower
 * @a: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *a)
{
int b;

for (b = 0; a[b] != '\0'; b++)
if (a[b] >= 'a' && a[b] <= 'z')
a[b] = a[b] - 32;

return (a);
}
