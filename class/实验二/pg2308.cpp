#include<stdio.h>

int main(void)
{
	//����д����int m, n;
	/*
		ԭ����Ϊint �ֵ��ĸ��ֽڵ��ڴ棬m��n��char���ͣ�
		�ʽ��int��ǰ�����ֽڵ�����ֵ��char������Ϻ��ֵ
	*/
	char m, n;

	printf("������һ����д��ĸ��");
	scanf("%c", &m);
	putchar('\n');
	printf("��д��ĸ��ASII����%d\n", m);
	//��д��ĸ��ASII����Сд��ĸ��ASII�����32
	n = m + 32;
	printf("ת����Сд��ĸ%c,��ASII����%d\n", n, n);

	return 0;
}