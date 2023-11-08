#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the opcodes of the main function.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * @Return: 0 if the program executed successfully,
 * 1 if the number of arguments is incorrect,
 * 2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	int (*f)(int, char**);
	int i = 0;
	int hexByte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = main;
	while (i < atoi(argv[1]))
	{
		hexByte = *(unsigned char *)(f + i);
printf("%.2x", hexByte);
		if (i < atoi(argv[1]) - 1)
			putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
