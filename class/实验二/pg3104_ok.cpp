#include<stdio.h>
void main()
{
    char ch;
	printf("请输入一个字符！\n");
    ch=getchar();
	if (ch>='a'&&ch<='z')
		printf("该字符是小写字母\n");
	else if (ch>='A'&&ch<='Z')
		printf("该字符是大写字母\n");
	else if (ch>='0'&&ch<='9')
		printf("该字符是数字字符\n");
	else
		printf("该字符是其它字符\n");	
}
