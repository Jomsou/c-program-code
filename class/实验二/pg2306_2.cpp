#include<stdio.h> 

int main(void)
{
	int x, y, t;
	
	printf("��������������x��y���Զ��ż������");
	scanf("%d,%d", &x, &y);
	printf("���������������x = %d, y = %d\n", x, y);
	
	t = x;
	x = y;
	y = t;
	printf("�����������������x = %d, y = %d\n", x, y);
	
	return 0;
}
