/*
	时间： 2017.10.03 9:43 
	目的： 学习怎样通过函数中的指针实现两个数的互换 	 
*/
#include<stdio.h>

//互换不成功 
void hu_2(int *p,int *q)
{
	int *t;
	t = p;
	p = q;
	q = t;
}
//互换成功 
void hu_3(int *p,int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

int main(void)
{
	int i = 5;
	int j = 9;
	printf("i = %d,j = %d\n",i, j);
	hu_2(&i, &j);
	printf("i = %d,j = %d\n",i, j);
	hu_3(&i, &j);
	printf("i = %d,j = %d\n",i, j);
	
	return 0;
}

/*
在Dev中的结果是：
--------------------------------------------------------------------
i = 5,j = 9
i = 5,j = 9
i = 9,j = 5

--------------------------------
Process exited after 0.04488 seconds with return value 0
Press any key to continue . . .
--------------------------------------------------------------------
总结：
	函数中实现两个数的互换应通过互换*p，*q的值而不是指针变量 p，q的值。
	
	函数中实现两个数的互换的改变分三步：
	1.调用被调函数时，实参为变量的地址，即如&a
	2.形参为指针变量
	3. 互换*p，*q的值
*/ 
 

