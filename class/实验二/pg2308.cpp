#include<stdio.h>

int main(void)
{
	//错误写法：int m, n;
	/*
		原因：因为int 分到四个字节的内存，m，n是char类型，
		故结果int的前三个字节的垃圾值与char重新组合后的值
	*/
	char m, n;

	printf("请输入一个大写字母：");
	scanf("%c", &m);
	putchar('\n');
	printf("大写字母的ASII码是%d\n", m);
	//大写字母的ASII码与小写字母的ASII码相差32
	n = m + 32;
	printf("转换成小写字母%c,其ASII码是%d\n", n, n);

	return 0;
}