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
   * starts here
   *
   */
int a;
int b;

for (a = 10; a <= 19; a++)
{
for (b = 10; b <= 19; b++)
{
if ((b % 10) > (a % 10))
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
if (a != 18 || b != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
