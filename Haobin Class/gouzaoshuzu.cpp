#include<stdio.h>
#include<malloc.h>
int main(void)
{   
	
	int len;
	printf("�����������Ԫ�ظ�����");
	scanf("%d", &len);
	int *parr = (int *)malloc(4*len);
	int i;
	
	for(i=0;i<len;i++){
		scanf("%d", &parr[i]);
	}
	
	for(i=0;i<len;i++){
	printf("������Ϊ��\n");
	printf("%d\n", parr[i]);
	}
	return 0;
}
