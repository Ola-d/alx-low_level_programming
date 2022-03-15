#include <stdio.h>

/**
*main - print the alphabetic in lower and upper case
*
* Return: Always (success)
*/
int main (void)
{
	char a = 'a';
	char A = 'A'
	
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'A')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}

