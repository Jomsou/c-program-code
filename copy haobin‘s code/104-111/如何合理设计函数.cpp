/*
	ʱ�䣺 2017.10.14 20:17
	Ŀ�ģ� ѧ������ж�һ�������Ƿ�������
	ȱ�㣺 ֻ��һ������ʵ�֣����ã�����������ʲ��� 
*/

#include<stdio.h>

int main(void)
{
	int val;
	int i;
	
	scanf("%d", &val);
	for (i = 2;i < val;++i)
	{
		if (0 == val%i)
			break;
	}
	if (i == val)
		printf("Yes!\n");
	else
		printf("No!\n");
		 
	return 0;
} 

/*
�ܽ᣺
	ȱ�㣺 ֻ��һ������ʵ�֣����ã�����������ʲ��� 
	�㷨�Ƚ���Ҫ 
*/
