#include<stdio.h>

int main(void)
{
	int a, b, c;

	c = (a = 7, b = a + 2, b+1);
	printf("����������ֵ�ǣ�a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}