#include <stdio.h>

/**
 * main - prints buzz each numberb of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("pizzbuzz");
		}
		else if (n % 3 == 0)
		{
			printf("fizz");
		}
		else if (n % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
