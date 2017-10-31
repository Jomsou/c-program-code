#include<stdio.h>
int main()
{
	int a,b,c,d;
	bool leap;
	d=0;
	printf("请分别输入年,月,日:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if((b>=1&&b<=12)&&(c>=1&&c<=31))
	{
		if(a%4==0)
		{
			if(a%100==0)
			{
				if(a%400==0)
					leap=true;
				else
					leap=false;
			}
			else
				leap=true;
		}
		else
			leap=false;
		if(leap==true&&b>2)
			d=d+1;
		d=d+c;
		switch(b-1)
		{
			case 11: d=d+30;
			case 10: d=d+31;
			case 9: d=d+30;
			case 8: d=d+31;
			case 7: d=d+31;
			case 6: d=d+30;
			case 5: d=d+31;
			case 4: d=d+30;
			case 3: d=d+31;
			case 2: d=d+28;
			case 1: d=d+31;
		}
		printf("这一天是%d年的第%d天\n",a,d);
		
	}
	else 
		printf("数据错误");
}
