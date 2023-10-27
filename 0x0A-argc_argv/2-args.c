#include "main.h"
#include <stdio.h>
/**
* main - the main function that print all arg that recvice
* @argc: count of arguments
* @argv: the array of arguments
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
