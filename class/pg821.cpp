# include <stdio.h>

int main()
{
	//�������ͱ���a��b����ʼ�� 
	int a = 100,
		b = 10;
	//����ָ���������ݵ�ָ�����pointer_1,pointer_2 
	int * pointer_1,
		* pointer_2;
	//�ѱ���a�ĵ�ַ����ָ�����pointer_1
	
	 
	pointer_1 = &a;
	//�ѱ���b�ĵ�ַ����ָ�����pointer_2 
	pointer_2 = &b;
	//�������a��b��ֵ 
	printf("a = %d, b = %d\n", a, b);
	//�������a��b��ֵ 
	printf("* pointer_1 = %d, * pointer_2 = %d\n", * pointer_1, * pointer_2);
	
	
	return 0;
	 
}
