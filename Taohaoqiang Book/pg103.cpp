#include <stdio.h>				//���Ǳ���Ԥ����ָ�� 
int main()      				//���������� 
{
	int max(int x,int y);		//�Ա����ú���max������ 
	int a, b, c;	    		//�������a,b,c
	scanf("%d, %d", &a,&b);		//�������a��b��ֵ                                     
	c = max(a,b);				//����max���������õ���ֵ��ֵ��c 
	printf("max=%d\n",c);		//���c��ֵ 
	return 0; 					//���غ�����ֵΪ 0 
}								//�����������
//�����������е����ֵ��max���� 
int max(int x,int y)			//����max����������ֵΪ���ͣ���ʽ����x��yΪ���� 
{
	int z;						//max�������������֣����屾�������õ��ı���zΪ���� 
	if(x>y)z = x;				// 
	else z = y;
	return(z);
}
