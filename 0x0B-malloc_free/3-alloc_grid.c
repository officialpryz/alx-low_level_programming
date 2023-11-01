#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
int **t;
int a;
int b;

if (width <= 0 || height <= 0)
return (NULL);

t = (int **)malloc(sizeof(int *) * height);
if (t == NULL)
return (NULL);

for (a = 0; a < height; a++)
{
t[a] = (int *)malloc(sizeof(int) * width);
if (t[a] == NULL)
{
for (b = 0; b < a; b++)
{
free(t[b]);
}
free(t);
}
}
for (a = 0; a < height; a++)
for (b = 0; b < width; b++)
t[a][b] = 0;  
return (t);
}
