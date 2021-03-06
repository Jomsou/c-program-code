/*
	时间： 2017.10.03 9:45 
	目的： 学习怎样通过函数中的指针改写数组中的元素	 
*/

#include<stdio.h>

void f(int *p,int len)
{
	//*(p+3) = 99;等价于p[3]
	p[3] = 99; 
}

int main(void)
{
	int a[5] = {1,2,3,4,5};
	f(a,5);
	printf("%d\n",a[3]);
	
	return 0;
}
/*
在Dev中的结果是：
--------------------------------------------------------------------
99 

--------------------------------
Process exited after 0.04488 seconds with return value 0
Press any key to continue . . .
--------------------------------------------------------------------
总结：
	学习怎样通过函数中的指针改写数组中的元素分三步：
	1.调用被调函数时，传入两个数组的参数[数组名，数组长度] 
	2.形参为[指针变量,整形变量]，接收以上传入两个数组的参数[数组名，数组长度] 
	3.通过 *(p+i)=...或者 p[i]=...改写数组中的元素
*/ 

