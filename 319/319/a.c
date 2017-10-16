#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	printf("enter loan principal \n");
	scanf_s("%d \n", &a);
	printf("rate \n");
	scanf_s("%d \n", &b);
	printf("enter term of the loan in day \n");
	scanf_s("%d \n", &c);
	d = a * b * (c / 365);
	printf("the charges is %d \n" , d);
	system("pause");
	return 0;
}