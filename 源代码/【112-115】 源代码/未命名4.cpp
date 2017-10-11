#include<stdio.h>

bool Isment(int val)
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
	int n;
	int val;
	scanf("%d", &val);
	for(n=2;n<=val;n++)
	{
		if(Isment(val))
			printf("%d\n", n);
	}
	return  0;
}
