#include<stdio.h>

int main(void)
{
	int i = 99;
	char ch = 'A';
	double x = 66.6;
	int *q = &i;
	char *p = &ch;
	double *t = &x;
	
	printf("%d,%d,%d\n",sizeof(i),sizeof(ch),sizeof(x));
	printf("%d,%d,%d\n",sizeof(q),sizeof(p),sizeof(t));
	
	return 0;
} 
