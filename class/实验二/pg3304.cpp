#include<stdio.h>
#include<math.h>

int main(void)
{
	float a, b, c, d, e;
	printf("�����������εı�\n");
	scanf("%f %f %f", &a, &b, &c);

	if (a+b>c && a+c>b && b+c>a)
	{
		if (a==b && b==c)
			printf("����һ���ȱ�������\n");
		else if (a==b || b==c)
			printf("����һ������������\n");
		else
			printf("����һ��һ��������\n");
	}
	else
		printf("�����߲��ܹ���������\n");

	return 0;
}