/*
	ʱ�䣺2017��10��10�� 9:07��
	Ŀ�ģ� ѧϰð������ 
*/
#include<stdio.h>

void bijiao(int *p, int len)
{
	int i, j, t;
	for (i = 0;i<len;i++)	
	{
		for (j = 0; j<len-1-i;j++)
		{
			 //ǰ�����߱Ƚϣ���ֵ��ķ���ǰ�棬С�ķ��ں��� 
			if(p[j]>p[j+1])
			{
				//�������� 
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		} 
		
	} 
}

int main(void)
{
	int i;
	int a[5] = {4, -8, 2, 15, -5};
	bijiao(&a[i],5);
	for (i = 0;i<5;i++)
	{
			printf("%d  ",a[i]);
	}
 	printf("\n");
 	
	return 0;
} 
