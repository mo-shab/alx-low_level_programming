#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - function to add argument
* @argc: count of arguments
* @argv: the array of argument
*
* Return: The addition,
* or 0 if no argument, error if one of the numbers is not a digit
*/

int main(int argc, char **argv)
{
	int sum = 0, i, j = 0;
	int num = 0;
	int erro = 0;
	char *arg = NULL;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			num = 0;
			arg = argv[i];
			while (arg[j] != '\0')
			{
				if (arg[j] < '0' || arg[j] > '9')
				{
					erro = 1;
					break;
				}
				num = num * 10 + (arg[j] - '0');
				j++;
			}
			if (erro == 1)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
	}

	return (0);
}
