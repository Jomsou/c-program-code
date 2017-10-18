#include<stdio.h>

void f(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b  = t;
}
int main(void)
{
	int i = 9;
	int j = 5;
	
	f(&i, &j);
	printf("i = %d, j = %d\n", i, j);
	
	return 0;
} 
