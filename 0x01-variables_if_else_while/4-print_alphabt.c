#include <stdio.h>
/**
 * main - print some letters alphabet
 *
 * Return : Always (success)
 */
int main (void)
{
char c;

for (c = 'a' ; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
purchar(c);
}

}
purchar('\n');

return (0);
}
