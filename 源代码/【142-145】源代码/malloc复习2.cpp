#include<stdio.h>
#include<malloc.h> 

int main(void)
{	 
	int i = 5;
	//内存共分配8个字节，
	//4个是p本身所占字节，属于静态分配 
	//4个字节是p指向的内存，是动态分配的 
	int * p = (int *)malloc(4);
	
	* p = 5;
	free(p);
	printf("%d\n", * p);
	
	return 0; 
} 
