#include<stdio.h>

void g(int *p,int len)
{
	*(p+3) = 99;
}
void f()
{
	int a[5] = {1,2,3,4,5};
	
	g(a,5);
	printf("%d\n",a[3]);
}

int main(void)
{
	f();
	return 0;
}
