#include <stdio.h>				//���Ǳ���Ԥ����ָ�� 
int main()      				//���������� 
{
	int max(int x,int y,int t);		//�Ա����ú���max������ 
	int a, b, c, d;	    		//�������a,b,c
	scanf("%d, %d, %d", &a,&b,&c);		//�������a��b��ֵ                                     
	d = max(a,b,c);				//����max���������õ���ֵ��ֵ��c 
	printf("max=%d\n",d);		//���c��ֵ 
	return 0; 					//���غ�����ֵΪ 0 
}								//�����������
//�����������е����ֵ��max���� 
int max(int x,int y,int t)			//����max����������ֵΪ���ͣ���ʽ����x��yΪ���� 
{
	int z;						//max�������������֣����屾�������õ��ı���zΪ���� 
	if(x>y&&x>t){
		z = x;
	}else if(y>x&&y>t){
		z = y;
	}else{
		z = t;
	}
	return(z);
}
