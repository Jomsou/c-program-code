/*
	时间：2017.10.16 21：00
	目的：熟练掌握输入、输出函数以及一点算法党的思考
	目标：实现从键盘上输入一个四位数，然后逆序输出这个数	 
*/
#include<stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	
	printf("请输入一个四位数："); 
	scanf("%d", &e);
	//获取四位数的千位上的数字 
	a = e / 1000;
	//获取四位数的百位上的数字 
	b = e % 1000 / 100;
	//获取四位数的十位上的数字 
	c = e % 1000 % 100 / 10;
	//获取四位数的个位上的数字 
	d = e % 10;
	//计算逆序的四位数的值 
	f = d * 1000 + c * 100 + b * 10 + a;
	printf("%d\n", f);
	printf("\n");
	
	return 0;
}
