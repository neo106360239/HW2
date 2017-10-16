#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\n");
	int a, b;
	for (a = 10; a >= 1; a--)
	{
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\n");
	int c,d;
	for (c = 1; c <= 10; c++)
	{
		for (d = 1; d <= 10; d++)
		{
			if (d <= (10 - c))
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}

		printf("\n");
	}
	printf("\n");
	int k, l;
	for(k = 1; k <= 10; k++)
	{
		for (l = 1; l <= 10; l++)
		{
			if (l >= k)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
		system("pause");
		return 0;
}