#include<stdio.h>

int main(void)
{
	int a, b, max;
	
	printf("������������a��b���Զ��ŷָ�����");
	scanf("%d,%d", &a, &b);
	max = (a > b ? a : b);
	printf("max = %d", max);
	printf("\n");
	
	return 0; 
} 
