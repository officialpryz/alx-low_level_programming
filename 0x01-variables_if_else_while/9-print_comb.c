#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway return 0
 *
 */
int main(void)
{
  /**
   * main function
   *
   * start here
   *
   */
int i;

for (i = 10; i < 20; i++)
{
putchar((i % 10) + '0');
if (i != 19)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
