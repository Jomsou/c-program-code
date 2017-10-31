#include<stdio.h>

int main(void)
{	
	int i;
	float sum = 1.0;

	for (i = 0;i<=50;i=i++)
	{
		if (i%2==0)
			sum = sum + 1/i;
	}
	printf("1+1/2+1/3+1/4+...+1/50µÄºÍÎª£º%f\n", sum);

	return 0; 
}