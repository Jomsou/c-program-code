#include <stdio.h>

//������
int main()		//����������
{				//�������忪ʼ
	int max(int x,int y, int z);		//�Ա����ú���max������
	int a, b, c, d;				//�������a��b��c��d

	scanf("%d,%d,%d",&a, &b, &c);		//�������a��b��c��ֵ
	d = max(a, b, c);				//����max���������õ���ֵ����d
	printf("max = %d\n", d);	//���d��ֵ

	return 0;					//���غ���ֵΪ0
}								//�����������
								
//�����������еıȽϴ�ֵ��max����						
int max(int x, int y, int z)	//����max����������ֵΪ���Σ���ʽ����x��y��zΪ����			
{
	int t;						//max�����������֣�����tΪ����

	if(x > y && x > z){			//���x > y ���� x > z����x��ֵ����t��
		t = x;
	}else if(y > x && y > z){	//���y <x ���� y > z����y��ֵ����t��
		t = y;
	}else{
		t = z;					//����������������������������z��ֵ����t��
	}

	return(t);
}