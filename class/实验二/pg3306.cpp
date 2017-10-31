#include<stdio.h>

int main(void)
{
	char ch;
	printf("*****************\n");
	printf("A:Very Good!\n");
	printf("B:Wonderful!\n");
	printf("C:Good!\n");
	printf("D:Pass!\n");
	printf("*****************\n");
	printf("请输入A~D任一个字母：\n");
	scanf("%c", &ch);
	switch (ch)
	{
		case 'A':
			printf("Very Good!\n");
			break;
		case 'B':
			printf("Wonderful!\n");
			break;
		case 'C':
			printf("Good!\n");
			break;
		default:
			printf("Pass!\n");
	}
	
	return 0; 
}