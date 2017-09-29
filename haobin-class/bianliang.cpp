#include <stdio.h>

void f(int j)
{
	int i = 999;
	printf("i = %d", i);
}

int main(void)
{
	f(8);
	return 0;
}
