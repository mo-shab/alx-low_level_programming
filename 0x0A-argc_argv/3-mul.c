#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - function that multiple two numbers
* @argc: argument count
* @argv: argument array
*
* Return: 0 for succes, 1 for not
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
