#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string value
 *
 * @s: string to point
 *
 */
void rev_string(char *s)
{
int i;
char p;

for (i = 0; i < _strlen(s) / 2; i++)
{
p = s[i];
s[i] = s[_strlen(s) - i - 1];
s[_strlen(s) - i - 1] = p;
}
}
