/*
	时间：2017.10.08  16:45
	目的：复习通过指针用被调函数改变主函数的变量。 
*/
#include<stdio.h>

void f(int *q){
	*q = 3;
}
int main(void)
{
	int i = 9;
	int *p = &i;  //基本类型指针 
	f(&i);
	printf("%d\n", i);
	
	return 0;
} 
