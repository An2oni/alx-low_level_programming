#include <studib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - print if number is positive, zero or negative
 * Return: Always (Success)
 *
 */

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	IF (N > 0)
	{
	print("%d is positive\n", n);
	}
	else if (n== 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negetive\n", n);
	}
	return (0);
}
