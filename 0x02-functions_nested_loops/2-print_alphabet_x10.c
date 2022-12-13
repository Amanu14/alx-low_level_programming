#include "main.h"

/**
* print_alphabet- Prints alphabet a to z.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i;
int x=0;

while (x < 10)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
 x++;
}
_putchar('\n');
}
