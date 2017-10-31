#include<stdio.h>
void main()
{
    int i=7,j=7;
    if (i == 1 && j == 2)
		printf("i=i+j=%d\n",i=i+j);
	else
	{
		printf("i=i-j=%d\n",i=i-j);
		printf("i=%d\n",i);
	}
}
