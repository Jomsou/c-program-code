#include<stdio.h>

int main(void)
{
	void huhuan(int a, int b);
	int a = 9,
		b = 5;
	huhuan(a, b);
	printf("a = %d, b = %d", a, b);
		
	return 0;
}

void huhuan(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
    return;
}
