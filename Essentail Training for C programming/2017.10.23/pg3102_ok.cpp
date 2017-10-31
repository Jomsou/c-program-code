#include<stdio.h>

int main(void)
{
	int x, y;
	printf("请输入x的值：");
	scanf("%d", &x);
	if (x>=-2&&x<=2)
		y = 10;
	else
		y = 0;
	printf("y的值为%d\n", y);
	
	return 0;
}
