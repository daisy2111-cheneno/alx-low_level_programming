#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  * _puts - prints the string
 *   * folowed by a new line
 *    *@str:input
 *     * Return: Always 0.
*/
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar('\n');
}
