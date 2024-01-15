#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of time to append
 *
 * Return: char value
 *
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

for (b = 0; dest[b] != '\0'; b++)
{}

for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[b + a] = src[a];
}
dest[b + a] = '\a';

return (dest);
}
