#include <stdio.h>
int main()
{
	int a, b, c;
	printf("����������ϵ��a��b��c��");
	scanf("%d,%d,%d", &a, &b, &c);
	float delta = b*b - 4*a*c;
	float x1,x2,x;
	if(delta>0){
		x1 = (-b + sqrt(delta)) / 2*a;
		x2 = (-b - sqrt(delta)) / 2*a;
		printf("��һԪ���η�����������ͬ�Ľ⣺x1 = %f,x2 = %f\n",x1, x2);
	}else if(delta=0){
		x1 = x2 =  
		printf("��һԪ���η�����������ͬ�Ľ⣺x1 = x2 = %f\n",x);	
	}else{
		printf("��һԪ���η���û�н�);
	}
}
