#include<stdio.h>
void main()
{
    char ch;
	printf("������һ���ַ���\n");
    ch=getchar();
	if (ch>='a'&&ch<='z')
		printf("���ַ���Сд��ĸ\n");
	else if (ch>='A'&&ch<='Z')
		printf("���ַ��Ǵ�д��ĸ\n");
	else if (ch>='0'&&ch<='9')
		printf("���ַ��������ַ�\n");
	else
		printf("���ַ��������ַ�\n");	
}
