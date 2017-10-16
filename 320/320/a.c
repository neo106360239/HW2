#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	printf("enter # of hours works \n");
	scanf_s("%d \n", &a);
	if (a > 40)
	{
		b =( a - 40)*15 +600;
			printf("salary is %d \n", b);
	}
	else
	{
		c = a * 10;
		printf("salary is %d \n", c);
	}
	system("pause");
	return 0;
}