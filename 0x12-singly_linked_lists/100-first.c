#include "lists.h"

void before_main() __attribute__((constructor));

/**
 * before_main - function that execute before main
 * Return: Nothing
*/

void before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
