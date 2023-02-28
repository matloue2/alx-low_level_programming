#include <unisd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: On success 1
 */
{
	return (write(1, &c, 1));
}
