#include <stdio.h>

/**
* main - print the alphabets in reverse
* Return: Always 0
*/
int main(void)
{
char lh;

for (lh = 'z'; lh >= 'a'; lh--)
	putchar(lh);

putchar('\n');

return (0);
}
