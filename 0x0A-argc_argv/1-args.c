#include "main.h"
#include <stdio.h>
/**
* main - the main function that print number of arg
* @argc: the number of argument
* @argv: the arguments
* Return: 0 if succsess
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
