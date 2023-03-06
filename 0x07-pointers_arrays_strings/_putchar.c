#include <unistd.h>
#include "main.h"
/**
 *_putchar - prints character on stdout
 *@ch: character to be printed
 *Return:1 (on success)
 *Otherwise 0
 *
 */
char _putchar(char ch)
{
	return (write(1, &ch, 1));
}
