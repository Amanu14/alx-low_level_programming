#include <stdio.h>

/**
 * mainr - Prints sum of multiples of 3 and 5
 *
 * Return: no return
 */
 
int main(void)

{
int a;
int sum=0;
  
for (a = 1; a < 1024; a++)
{
if ((a % 3) == 0 || (a % 5) == 0)
{
sum =sum +a;
}
printf("%d", sum);
printf("\n");

}
}
