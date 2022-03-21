#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  * puts2 - prints every other character of a string
 *   * followed by a new line
 *    *@str:input
 *     * Return: Always 0.
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
