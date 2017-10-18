/*
	时间： 2017.10.14 20:09
	目的： 区分break和return的区别 
*/
#include<stdio.h>

void f(void)
{
	int i;
	
	for (i = 0;i < 5;i++)
	{
		printf("大家辛苦了！\n");
		//break;
		return;
	}
	printf("同志们好！\n");
} 

int main(void)
{
	f();
	
	return 0; 
}

/*
	总结： 
		break是跳出循环，而return是跳出整个函数 

*/ 
