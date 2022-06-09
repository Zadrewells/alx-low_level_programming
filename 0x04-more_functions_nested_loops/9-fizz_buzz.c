#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100, replacing multiples of 3
 * with fizz, multiples of 5 with buzz, and multiples of both 3
 * and 5 with FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int num;

	while (num++ < 100)

	if ((num % 3 == 0) && (num % 5 == 0))
	printf("Fizz ");

	else if ((num % 3) == 0)
	printf("Fizz ");

	else if ((num % 5) == 0)
	{
		if (num != 100)
		printf("Buzz ");
	else
		printf("Buzz");
	}

	else
	printf("%d", num);

	printf("\n");
	return (0);
}
