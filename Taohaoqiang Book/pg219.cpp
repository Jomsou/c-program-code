#include <stdio.h>
int main()
{
	int sign = 1;
	double demo = 2.0,			//����demo��sum��term Ϊ˫�����ͱ��� 
		   sum = 1.0,
		   term;
	while(demo<=100)
	{
		sign = -sign;
		term = sign/demo;
		sum = sum + term;
		demo = demo + 1; 
	}
	printf("%f\n", sum);
	return 0;
} 
