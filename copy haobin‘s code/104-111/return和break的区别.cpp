/*
	ʱ�䣺 2017.10.14 20:09
	Ŀ�ģ� ����break��return������ 
*/
#include<stdio.h>

void f(void)
{
	int i;
	
	for (i = 0;i < 5;i++)
	{
		printf("��������ˣ�\n");
		//break;
		return;
	}
	printf("ͬ־�Ǻã�\n");
} 

int main(void)
{
	f();
	
	return 0; 
}

/*
	�ܽ᣺ 
		break������ѭ������return�������������� 

*/ 
