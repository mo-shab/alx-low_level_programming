#include "main.h"
#include <stdio.h>
/**
* main - The main of the program.
* @argc: the count of argv
* @argv: array of argument to the main
*
* Return: 0 if success, any value for not
*/

int main(int argc, char *argv[])
{
while(argc--)
printf("%s\n", *argv);
return (0);
}
