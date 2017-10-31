#include<stdio.h> 

void huhuan(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main(void)
{
	int x, y;
	
	printf("请输入两个整数x，y（以逗号间隔）：");
	scanf("%d,%d", &x, &y);
	printf("输入的两个整数：x = %d, y = %d\n", x, y);
	
	int *p, *q;
	p = &x;
	q = &y;
	huhuan(&x, &y);
	printf("交换后的两个整数：x = %d, y = %d\n", x, y);
	
	return 0;
}
