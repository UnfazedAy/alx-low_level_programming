#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of the argument only if they are digits
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 if no errors, 1 if invalid argument
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
