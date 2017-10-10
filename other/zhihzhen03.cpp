/*
	时间：2017年10月10日 9:07；
	目的： 学习冒泡排序 
*/
#include<stdio.h>

void bijiao(int *p, int len)
{
	int i, j, t;
	for (i = 0;i<len;i++)	
	{
		for (j = 0; j<len-1-i;j++)
		{
			 //前后两者比较，数值大的放在前面，小的放在后面 
			if(p[j]>p[j+1])
			{
				//交换数字 
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
