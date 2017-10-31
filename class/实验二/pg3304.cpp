#include<stdio.h>
#include<math.h>

int main(void)
{
	float a, b, c, d, e;
	printf("请输入三角形的边\n");
	scanf("%f %f %f", &a, &b, &c);

	if (a+b>c && a+c>b && b+c>a)
	{
		if (a==b && b==c)
			printf("这是一个等边三角形\n");
		else if (a==b || b==c)
			printf("这是一个等腰三角形\n");
		else
			printf("这是一个一般三角形\n");
	}
	else
		printf("这三边不能构成三角形\n");

	return 0;
}