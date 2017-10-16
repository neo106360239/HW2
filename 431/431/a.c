#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k ,l;
	for (i = 1; i <=5; i++)
	{
		int j =10 - (i * 2 - 1) / 2;
		for (k = 1; k < j; k++)
			printf(" ");
		for (l = 0; l < (i * 2 - 1); l++)
			printf("*");
		for (k = 1; k <= j; k++)
			printf(" ");
		printf("\n");
	}
	for (i = 4; i >= 1; i--)
	{
		int j = 10 - (i * 2 - 1) / 2;
		for (k = 1; k < j; k++)
			printf(" ");
		for (l = 0; l < (i * 2 - 1); l++)
			printf("*");
		for (k = 1; k <= j; k++)
			printf(" ");
		printf("\n");
	}
	system("pause");
	return 0;
}