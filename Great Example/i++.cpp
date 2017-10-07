#include<stdio.h>

int main(void)
{
	int i;
	int k[5]={1,2,3,4,5};
	// 
	//printf("k = %d\n",i++);
	//printf("k = %d\n",++i);
	for(i=0;i<5;i++){
		printf("%d\n",k[i]);
	}
	for(i=0;i<5;++i){
		printf("%d\n",k[i]);
	}
	return 0;
} 
