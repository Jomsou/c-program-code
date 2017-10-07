#include<stdio.h>
#include<malloc.h>

void f(int *q)
{
	*q = 100;
}
int main(void)
{
	int *p = (int *)malloc(4);
	*p  = 3;
	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);
	
	return 0;
} 
