/*
	ʱ�䣺2017.10.08  16:45
	Ŀ�ģ���ϰͨ��ָ���ñ��������ı��������ı����� 
*/
#include<stdio.h>

void f(int *q){
	*q = 3;
}
int main(void)
{
	int i = 9;
	int *p = &i;  //��������ָ�� 
	f(&i);
	printf("%d\n", i);
	
	return 0;
} 
