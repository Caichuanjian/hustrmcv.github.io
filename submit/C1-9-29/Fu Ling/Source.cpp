//Ѱ��һ��5*5�����еİ��㡣
#include "stdio.h"

int main(void)
{
	int i, j, m, n, r, s, o;
	int z = 0, p = 0, q = 0;
	int array[5][5];

	printf("Please enter 25 integers and press spacebar twice after enter a integer.\n");
	printf("And press Enter Key after enter every five integers.\n\n");

	for (i = 0; i < 5; i++)  //��þ����ֵ
	{
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &array[i][j]);
		}
		printf("\n");
	}
	
	for (m = 0; m < 5; m++)  
	{ 
		s = array[m][0];
		
		for (n = 0; n < 5; n++)  //ѭ�����ҵ� m �е����ֵ��
		{
			if (array[m][n] >= s)
			{
				s = array[m][n];
				p = n;
			}
		}
		
		r = array[0][p];
		
		for (o = 0; o < 5; o++)  //�Ҹø����ֵ�����е���Сֵ��
		{
			if (r >= array[o][p])
			{
				r = array[o][p];
				q = o;
			}
		}

		if (s == r)  //����������⣬����������������Ͱ���Ĵ�С��
		{
			printf("%d\t%d\t%d\n", q + 1, p + 1, array[q][p]);
		}
		else
		{
			z++;
		}
	}
	
	if (z == 5)  //��ÿһ�о��ް���ʱ�������notfound����
	{
		printf("not found.\n");
	}

	return 0;
}