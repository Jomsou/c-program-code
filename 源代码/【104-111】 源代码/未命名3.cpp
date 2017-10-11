#include<stdio.h>

bool Isprime(int val)
{
	int i;
	for(i=2;i<val;++i)
	{
		if(val%i==0)
			break;
	}
	if(i==val)
		return true;
	else
		return false; 
}
int main(void)
{
	int m;
	int n;
	scanf("%d", &m);
	for(n=2;n<=m;n++)
	{
		if(Isprime(n))
		printf("%d\n", n);
	}
	return 0;
}
