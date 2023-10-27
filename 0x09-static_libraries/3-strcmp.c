#include "main.h"
/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 *
 */
int _strcmp(char *s1, char *s2)
{
int x = 0;

while (s1[x] - s2[x] == 0 && s1[x] != '\0')
{
x++;
}
return (s1[x] - s2[x]);
}
