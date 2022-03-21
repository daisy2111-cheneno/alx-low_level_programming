#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
*/
int _atoi(char *s)
{
	int sign;
	unsigned int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign++;
		}
		if(*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		if (*s == ';')
		{
			break;
		}
		s++;
	}
	if (sign % 2 != 0)
	{
		return (-num);
	}
	return (num);
}

