#include "main.h"
/**
* main - Prints _putchar.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int str[] = {95, 80, 85, 84, 67, 72, 65, 82};
int count, sz;

sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{
_putchar(str[count]);
}
_putchar('\n');
return (0);
}
