#include<stdio.h>

//定义一个实现冒泡的函数
void mao(int *p,int len)
{
	int i, j, t;
	for (i = 0;i<len;i++)
	{
		for (j = 0;j<len-1-i;j++)
		{
			if (p[j]>p[j+1])
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
		printf("%d ",p[j]);
	}
} 
int main(void)
{
	int i;
	int a[5] = {-15,23,-86,5,63};
	mao(a,5);
	
	return 0;
} 
