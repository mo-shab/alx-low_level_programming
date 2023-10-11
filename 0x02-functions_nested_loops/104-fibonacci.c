#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	int cnt;
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	cnt = 0;
	i = 0;
	j = 1;
	for (cnt = 1; cnt <= 91; cnt++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (cnt != 98)
			printf(", ");
		cnt++;
	}
	putchar('\n');
	return (0);
}
