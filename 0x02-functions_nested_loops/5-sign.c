#include "main.h"

/**
* _isalpha - checks if aphabet is lower case.
*
*@n: An ASCII character
*
* Return: 1 if number is positive -1 if number us negative for anything else
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
