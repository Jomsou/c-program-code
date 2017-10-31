#include<stdio.h>
void main(void)
{
	int i,j,item;
	long int sum;
	sum=0;
	item=1; 
	for(i=1;i<=10;i++)
	{     
		for(j=1;j<=i;j++)
		{
			item=item*i;
			sum=sum+item;
		}
	}
	printf("the sum is %d\n",sum);
}
