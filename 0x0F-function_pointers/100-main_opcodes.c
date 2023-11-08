#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Prints the opcodes of the main function.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * @Return: 0 if the program executed successfully, 1 if the number of arguments is incorrect,
 * 2 if the number of bytes is negative.
 */
int main(int argc, char* argv[])
{
	unsigned char* mainAddress;
	int numBytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		printf("Usage: ./main number_of_bytes\n");
		exit(1);
	}
	numBytes = atoi(argv[1]);
	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	mainAddress = (unsigned char*) main;
	printf("Opcode of main function:\n");
	for (i = 0; i < numBytes; i++)
	{
		printf("%02x ", mainAddress[i]);
	}
	printf("\n");

	return (0);
}
