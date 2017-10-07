#include<stdio.h>

void hu(int *p,int*q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
	return;
}
int main(void)
{

	int a = 9,b = 5;
	int *x, *y;
	x = &a,
	y = &b;
	
	hu(&a, &b);
	printf("%d,%d\n",a, b); 
	printf("%d,%d\n",*x,*y); 
	return 0;
}
