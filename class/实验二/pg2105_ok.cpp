#include<stdio.h>

int main(void)
{
	char a;

	printf("������һ���ַ���");
	a = getchar();
	putchar(a);
	putchar('\n');
	printf("a = %c\n", a);
	printf("\n");

	return 0;
}