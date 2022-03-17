#include "main.h"

/*
 * _isupper - checks if parameter c is uppercase
 * @c: checks for uppercase 
 * Returns : 1 if c is uppercase 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
