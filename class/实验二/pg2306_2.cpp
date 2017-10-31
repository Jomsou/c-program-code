#include<stdio.h> 

int main(void)
{
	int x, y, t;
	
	printf("请输入两个整数x，y（以逗号间隔）：");
	scanf("%d,%d", &x, &y);
	printf("输入的两个整数：x = %d, y = %d\n", x, y);
	
	t = x;
	x = y;
	y = t;
	printf("交换后的两个整数：x = %d, y = %d\n", x, y);
	
	return 0;
}
