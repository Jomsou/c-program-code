/*
	ʱ�䣺 2010.10.09 17:11
	Ŀ�ģ� ѧϰ�ṹ������ֻ�ȡ��Ա�ķ�ʽ 
*/
#include<stdio.h>

int main(void)
{
	//����һ���ṹ�����ͱ���
	struct  Student
	{
		int age;
		char sex;
		char name[100];
	};
	struct Student st = {20,'F',"marry"};
	//����һ���ṹ�����͵�ָ����� 
	struct Student * pst = &st;
	//�ṹ����������ֻ�ȡ��Ա�ķ�ʽ
	printf("%d %c %s\n",st.age,st.sex,st.name);
	printf("%d %c %s",pst->age,pst->sex,pst->name);	
		
	return 0;
} 


/*
----------------------------------------------
�ܽ᣺
	�ṹ����������ֻ�ȡ��Ա�ķ�ʽ ��
	1.������.��Ա,��st.age 
	2.ָ�������->��Ա����stuct Student * pst = &st; pst->age,pst->sex,pst->name
----------------------------------------------


*/ 
