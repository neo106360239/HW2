#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	printf("enter sales in dollar \n");
	scanf_s("%d", &a);
	b = a*0.09 + 200;
	printf("salary is      %d" , b);
	system("pause");
	return 0;
}