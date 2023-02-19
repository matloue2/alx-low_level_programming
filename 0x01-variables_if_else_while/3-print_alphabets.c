#include<stdio.h>

/**
 * main - prints the alphabe in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Aways 0(Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
