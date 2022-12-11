#include <stdio.h>
/**
 * main - Prints alphabet in reversed order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 122; i > 96; i--)
{
putchar(i);
}
for (i = 97; i< 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
