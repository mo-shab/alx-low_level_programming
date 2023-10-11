#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long cnt, i, j, k;

	i = 0;
	j = 1;
	for (cnt = 0; cnt < 50; cnt++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (cnt == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
