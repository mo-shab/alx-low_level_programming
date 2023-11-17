#include "lists.h"

/**
 * before_main - function that execute before main
 * Return: Nothing
*/
void before_main() __attribute__((constructor))
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
