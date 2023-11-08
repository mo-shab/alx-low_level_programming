#include 3-calc.h"

/**
 * get_op_func - select the correct function to performe
 * @s: the operator passed to the function
 * Return : a pointer to the correct function
 */

int (*get_op_func(char *s)(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}
