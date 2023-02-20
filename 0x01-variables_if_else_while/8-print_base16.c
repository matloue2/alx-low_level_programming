#include <stdio.h>
/**
* main -prints the numbers in the base 16
* Return: Always 0
*/
int main(void)
{
	int num;
	char la;

	for (num = 48; num < 58; num++)
		putchar(num);

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
