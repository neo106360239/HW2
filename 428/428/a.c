#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int type;

	while (1)
	{
		printf("(1)�g�z�H�� (2)���~�u (3)����� (4)�s�u\n");
		printf("�п�J�~��N�X(-1 to end): ");
		scanf_s("%d", &type);
		if (type == -1)
		{
			break;
		}
		switch (type)
		{
		case 1:
		{
			float salary = 0;
			printf("�п�J�T�w�P�~: ");
			scanf_s("%f", &salary);
			printf("�~��:%.2f\n\n", salary);
			break;
		}
		case 2:
		{
			float rate, salary;
			int hour;

			printf("��J�ɼ�: ");
			scanf_s("%d", &hour);
			printf("��J�C�p�ɤu��: ");
			scanf_s("%f", &rate);
			if (hour > 40)
			{
				salary = (hour - 40)*rate*1.5 + 40 * rate;
			}
			else
			{
				salary = (hour)*rate;
			}

			printf("�~��:%.2f\n\n", salary);
			break;
		}
		case 3:
		{
			float week_sale, salary;

			printf("��J��g���B: ");
			scanf_s("%f", &week_sale);
			salary = (float)((week_sale*0.057) + 250);
			printf("�~��:%.2f\n\n", salary);
			break;
		}
		case 4:
		{
			float num_pieces, pieces, salary;

			printf("��J�C�󲣫~�u��: ");
			scanf_s("%f", &pieces);
			printf("��J���: ");
			scanf_s("%f", &num_pieces);
			salary = (float)pieces*num_pieces;
			printf("�~��:%.2f\n\n", salary);

			break;
		}
		default:
			break;
		}
	}

	return 0;
}
