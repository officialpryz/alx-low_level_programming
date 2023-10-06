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
   */
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
}
putchar('\n');
return (0);
}
