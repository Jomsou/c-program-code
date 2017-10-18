#include<stdio.h>

int main(void)
{
	int a, b, max;
	
	printf("请输入两个数a，b（以逗号分隔）：");
	scanf("%d,%d", &a, &b);
	max = (a > b ? a : b);
	printf("max = %d", max);
	printf("\n");
	
	return 0; 
} 
