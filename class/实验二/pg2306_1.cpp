#include<stdio.h> 

void huhuan(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main(void)
{
	int x, y;
	
	printf("��������������x��y���Զ��ż������");
	scanf("%d,%d", &x, &y);
	printf("���������������x = %d, y = %d\n", x, y);
	
	int *p, *q;
	p = &x;
	q = &y;
	huhuan(&x, &y);
	printf("�����������������x = %d, y = %d\n", x, y);
	
	return 0;
}
