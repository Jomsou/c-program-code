#include<stdio.h>
main()
{
	int r;
	float area;
	for(r=1;r<=10;r++)
	{
		area=3.141593*r*r;
		if(area>100.0)
			break;
		printf("�뾶=%d�����=%f\n",r,area);
	}
	printf("��ʱ�뾶Ϊ��%d\n",r);
}

