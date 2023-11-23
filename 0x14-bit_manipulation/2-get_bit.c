#include "main.h"
/**
 * get_bit - gets bit a index
 * @n: number go through
 * @index: index go through
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
return (-1);

return (n >> index & 1);
}
