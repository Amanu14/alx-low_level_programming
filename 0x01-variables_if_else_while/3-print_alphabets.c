#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
char caps[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
for (i = 0; i < 26; i++)
{
putchar(caps[i]);
}
putchar('\n');
return (0);
}
