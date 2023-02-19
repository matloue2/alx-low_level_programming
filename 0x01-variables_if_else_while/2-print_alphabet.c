#include <stdio.h>


/**
 * main - print alphabets in lower case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for(ch = 'a'; lc <= 'z'; lc++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
