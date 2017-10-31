#include <stdio.h>

//主函数
int main()		//定义主函数
{				//主函数体开始
	int max(int x,int y);		//对被调用函数max的声明
	int a, b, c, e, f;				//定义变量a, b, c, e, f
	
	scanf("%d,%d,%d",&a, &b, &c);		//输入变量a, b, c的值
	e = max(a, b);				//调用max函数，将得到的值赋给e
	f = max(e, c);				//调用max函数，将得到的值赋给f
	printf("max = %d\n", f);	//输出f的值
	
	return 0;					//返回函数值为0
}								//主函数体结束

//求两个整数中的比较大值的max函数						
int max(int x, int y)			//定义max函数，函数值为整形，形式参数x，y为整形
{
	int z;						//max函数中的声明部分，定义该函数用到的变量z

	if(x > y){					//若x>y成立，将x的值赋给变量z
		z = x;
	}else{						//否则，将y的值赋给变量z
		z = y;       
	}
	
	return(z);					//将z的值作为max函数值，返回到调用max函数的位置
}