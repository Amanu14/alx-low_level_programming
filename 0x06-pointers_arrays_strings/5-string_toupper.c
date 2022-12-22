#include "main.h"

/**
 * string_toupper - appends the src string to the dest string,
 * @stp:the first string
 *
 * Return: return stp.
 */

char *string_toupper(char *stp)
{
int count = 0;

while (*(stp + count) != '\0')
{
if ((*(stp + count) >= 97) && (*(stp + count) <= 122))
*(stp + count) = *(stp + count) - 32;
count++;
}

return (stp);
}
