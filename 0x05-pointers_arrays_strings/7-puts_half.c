#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  * puts_half -prints the second half
 *   * followed by a line
 *    * @str:input
 *     * Return: Always 0.
*/
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (i >= len /2)
			{
				putchar(str[i]);
			}
		}
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (i >= (len-1) / 2)
			{
				putchar(str[i]);
			}
		}
	}
	putchar('\n');
}
