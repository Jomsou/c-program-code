#include<stdio.h>

int main(void)
{
	int x, k;
	printf("请输入x的值：\n");
	scanf("%d", &x);
	k = x % 5;
	if (k == 0)
		printf("x能被5整除\n");
	else
		printf("x不能被5整除\n");
	
	return 0;
} 
