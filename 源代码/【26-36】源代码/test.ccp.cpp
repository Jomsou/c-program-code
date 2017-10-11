#include <stdio.h>
int main(void)
{
	int a = 0,
		b = 0,
		c = 0;
	int d;
	while(a<=9||b<=9||c<=9)
	{
		d = a*a*a + b*b*b + c*c*c;
		a++;
		b++;
		c++;
	}
	return 0;
} 
