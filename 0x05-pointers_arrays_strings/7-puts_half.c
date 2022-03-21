#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
*/
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = len / 2; str[i] != '\0'; i++)
	{
		if (i >= len /2)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
