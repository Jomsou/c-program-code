#include<stdio.h>
void main()
{
	int number;
	printf("请输入一个整数：");
	scanf("%d",&number);
	if(number%5==0)
		printf("该数能被5整除。\n");
	else
		printf("该数不能被5整除。\n");
}
