# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int i = 5;
	int * p = (int *)malloc(4);
		/*
			1. Ҫʹ��malloc�������������malloc.h���ͷ�ļ�
			2. malloc����ֻ��һ���βΣ������β�������
			3. 4��ʾ����ϵͳΪ���������4���ֽ�
			4. malloc����ֻ�ܷ��ص�һ���ֽڵĵ�ַ
			5. 12�з�����8���ֽ�, p����ռ4���ֽڣ� p��ָ����ڴ�Ҳռ4���ֽ�
			6. p������ռ���ڴ��Ǿ�̬����ģ� p��ָ����ڴ��Ƕ�̬�����   	
		*/
		
	*p = 5;
	free(p);
	printf("%d\n", *p);
	return 0;
}
