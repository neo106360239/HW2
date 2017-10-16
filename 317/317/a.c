#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int f;
	int g;
	printf("enter account number \n");
	scanf_s("%d \n", &a);
	printf("enter beginning number \n");
	scanf_s("%d \n", &b);
	printf("enter total charge \n");
	scanf_s("%d \n", &c);
	printf("enter total credits \n");
	scanf_s("%d \n", &d);
	printf("enter credits limit \n");
	scanf_s("%d \n", &f);
	printf("account:          %d \n", a);
	printf("credit limit:          %d \n", f);
	g = b + c - d;
		printf("balance:          %d", g);
		system("pause");
		return 0;
}