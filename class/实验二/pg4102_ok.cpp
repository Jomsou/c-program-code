#include<stdio.h>
void main()
{
	int count = 0,grades;
	printf("�����������");  
	scanf("%d",&grades);
	while(grades>=0)
	{
		if(grades>=60) count++;
    }
	printf("����%d��ѧ���ɼ��ϸ�\n",count);
}
