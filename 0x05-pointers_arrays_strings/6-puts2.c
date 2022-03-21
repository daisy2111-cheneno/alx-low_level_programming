#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  * puts2 - prints one char out of 2
 *   * @str: input
 *    *
*/
void puts2(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		putchar(str[i]);
		putchar('\n');
		i++;
	}
	putchar('\n');
}
