#include "main.h"

/**
* print_alphabet_x10 - Prints alphabet a to z 10 times.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i;
int x = 0;

while (x < 10)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
x++;
}

}
