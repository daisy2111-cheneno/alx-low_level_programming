#include <math.h>
#include <stdio.h>

/*
 * main - check code
 *
 * Return 0: Always (Success)
*/

int main(void)
{
	long int i, n, max;
	
	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		printf("%d", 2);
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
		max = n;

	printf("%ld\n", max);

	return (0);
}
