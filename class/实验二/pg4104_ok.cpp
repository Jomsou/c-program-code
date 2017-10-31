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
		printf("半径=%d，面积=%f\n",r,area);
	}
	printf("此时半径为：%d\n",r);
}

