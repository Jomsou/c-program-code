#include<stdio.h>

int main(void)
{
	int x, k;
	printf("������x��ֵ��\n");
	scanf("%d", &x);
	k = x % 5;
	if (k == 0)
		printf("x�ܱ�5����\n");
	else
		printf("x���ܱ�5����\n");
	
	return 0;
} 
