#include "main.h"

/**
* _isalpha - checks if aphabet is lower case.
*
*@c: An ASCII character
*
* Return: 1 if character is alpha 0 for anything else
*/

int _isalpha(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
