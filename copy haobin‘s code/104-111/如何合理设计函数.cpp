/*
	时间： 2017.10.14 20:17
	目的： 学会如何判断一个数字是否是素数
	缺点： 只有一个函数实现，不好，代码的利用率不高 
*/

#include<stdio.h>

int main(void)
{
	int val;
	int i;
	
	scanf("%d", &val);
	for (i = 2;i < val;++i)
	{
		if (0 == val%i)
			break;
	}
	if (i == val)
		printf("Yes!\n");
	else
		printf("No!\n");
		 
	return 0;
} 

/*
总结：
	缺点： 只有一个函数实现，不好，代码的利用率不高 
	算法比较重要 
*/
