#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int y;
int x;

for (i = 48; i < 58; i++)
{
y=i+1;
for (x = y; x < 58; x++)
{
if (i != 48)
{
putchar(' ');
}
putchar(i);  
putchar(x);
if (i != 56)
{
putchar(",");
}
if (i != 57)
{
putchar(" ");
}
}
}
putchar('\n');
return (0);
}

