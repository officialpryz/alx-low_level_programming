#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
char *nstr;
unsigned int i, j;

if (str == NULL)
return (NULL);
i = j = 0;
while (str[j] != '\0')
{
j++;
}
j++;
nstr = malloc(j *sizeof(*str));
if (nstr == NULL)
return (NULL);
while (i <= j)
{
nstr[i] = str[i];
i++;
}
return (nstr);
}
