#include <stdio.h>

//主函数
int main()		//定义主函数
{				//主函数体开始
	int max(int x,int y, int z);		//对被调用函数max的声明
	int a, b, c, d;				//定义变量a，b，c，d

	scanf("%d,%d,%d",&a, &b, &c);		//输入变量a，b，c的值
	d = max(a, b, c);				//调用max函数，将得到的值赋给d
	printf("max = %d\n", d);	//输出d的值

	return 0;					//返回函数值为0
}								//主函数体结束
								
//求两个整数中的比较大值的max函数						
int max(int x, int y, int z)	//定义max函数，函数值为整形，形式参数x，y，z为整形			
{
	int t;						//max函数声明部分，定义t为整形

	if(x > y && x > z){			//如果x > y 并且 x > z，将x的值赋给t；
		t = x;
	}else if(y > x && y > z){	//如果y <x 并且 y > z，将y的值赋给t；
		t = y;
	}else{
		t = z;					//并且以上两个条件都不成立，将z的值赋给t；
	}

	return(t);
}