#include<stdio.h>

void bijiao(int *p, int len)
{
	int i, j, t;
	for(i = 0;i<len;i++)
	{
		for (j = 0;j<len-1-i;j++)
		{
			if (p[j]<p[j+1])
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}
}
int main(void) 
{
	int a[5] = {-12, 23, -2, 15, 84};
	int i;
	bijiao(&a[i],5);
	for (i = 0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
