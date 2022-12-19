#include "holberton.h"

/**
 * print_rev - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
int i, j, l];
char *str;

str = s;
l=(strlen(str) -1);
char temp[l + 1];
printf("lengthis %d\n", l);
for(i=l;i>=0;i--)
{
temp[j]=str[i];
j++;
}

printf("\n:%s",temp);

}
