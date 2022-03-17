#include "main.h"

/*
 * isdigit- checks for integers 0 to 9
 * @c : inpjut checks for integers
 * Return: 1 if c is a digit 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
