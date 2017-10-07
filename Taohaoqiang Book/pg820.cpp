# include <stdio.h>

int main(void)
{
	//定义三个指针变量*p1，*p2，*p 和两个整型变量 
	int * p1, * p2, * p, a, b;
	
	printf("please enter two integer numbers:");
	scanf("%d,%d", &a, &b);
	p1 = &a;
	p2 = &b;
	
	if(a < b){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	
	printf("a = %d,b = %d\n", a, b);
	printf("max = %d,min = %d\n", * p1, *p2);
	
	return 0;
}
