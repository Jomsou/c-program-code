#include<stdio.h>

int main(void)
{
	int x, y;

	printf("ÇëÊäÈëxµÄÖµ£º\n");
	scanf("%d", &x);
	if (x>-5 && x<=0)
		y = x;
	else if (x<=5)
		y = x - 1;
	else if (x<=10)
		y = x + 1;
	printf("x = %d, y = %d\n", x, y);

	return 0;
}