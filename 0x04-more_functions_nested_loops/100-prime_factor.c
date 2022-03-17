#include <stdio.h>
#include <math.h>

/*
 * main - prints for the largest prime factor factor of the number 612852475143
 * followed by a new line.
 * Return 0: Always (Success)
*/

int main(void)
{
	long int n, i, max;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);

	return (0);
}
