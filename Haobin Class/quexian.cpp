#include<stdio.h>

void g(int *p,int len){
	*(p+2) = 99;
}
void f(){
	int a[5] = {1,2,3,4,5};
	g(a,5);
	printf("%d\n", a[2]);
}
int main(void)
{
	f();
	
	return 0;
} 

