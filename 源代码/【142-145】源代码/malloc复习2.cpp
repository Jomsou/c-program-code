#include<stdio.h>
#include<malloc.h> 

int main(void)
{	 
	int i = 5;
	//�ڴ湲����8���ֽڣ�
	//4����p������ռ�ֽڣ����ھ�̬���� 
	//4���ֽ���pָ����ڴ棬�Ƕ�̬����� 
	int * p = (int *)malloc(4);
	
	* p = 5;
	free(p);
	printf("%d\n", * p);
	
	return 0; 
} 
