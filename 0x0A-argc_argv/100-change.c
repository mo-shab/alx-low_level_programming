#include <stdio.h>
#include <stdlib.h>
/**
* main - The main function that returen change for a cent.
* @argc: count of arguments
* @argv: The array of arguments
*
* Return: 0 for success 1 for failur
*/

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
        int num_coins = sizeof(coins) / sizeof(coins[0]);
        int coin_count = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}


	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < num_coins; i++)
		{
            		while (cents >= coins[i])
			{
				cents -= coins[i];
				coin_count++;
			}
		}
		printf("%d\n", coin_count);
	}

return 0;
}
