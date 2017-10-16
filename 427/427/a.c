#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int j;
	int k;
	for (i = 1; i <= 500; i++)
	{
		for(k =1; k<=500 ; k++)
			for(j=1; j<=500 ; j++)
				if (i *i == j*j + k *k)
				{
					printf("%d \n", j);
					printf("%d \n", k);
					printf("%d \n", i);
					printf("\n");
				}
	}
	system("pause");
	return 0;
}