#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * check if the last digit of n is greater then 5
 * or equal to 0 or less then 6
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	if ((n % 10) > 5)
		printf("%d is %d and is greater than 5", n, (n % 10));
	else if ((n % 10) == 0)
		printf("%d is 0 and is 0", n);
	else
		printf("%d is %d and is less than 6 and not 0", n, (n % 10));

	printf("\n");
	return (0);
}
