#include "main.h"

/**
 *_puts - The entry point
 *@str: the printed string.
 *Return: rETURNS A STRING.
 */

void _puts(char *str)
{
	_putchar(*str++);
	_putchar('\n');
}
