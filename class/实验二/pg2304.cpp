#include<stdio.h>

int main(void)
{
	int C, F;
	
	printf("请输入摄氏温度：");
	scanf("%d", &C);
	putchar('\n');
	F = 9 * C / 5 + 32;
	printf("对应的华氏温度：%d\n", F);

	return 0;
}