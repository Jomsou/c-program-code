#include <stdio.h>

//主函数
int main()		//定义主函数
{				//主函数体开始
	int max(int x,int y);		//对被调用函数max的声明
	int a, b, c;				//定义变量a，b，c

	scanf("%d,%d",&a, &b);		//输入变量a和b的值
	c = max(a, b);				//调用max函数，将得到的值赋给c
	printf("max = %d\n", c);	//输出c的值

	return 0;					//返回函数值为0
}								//主函数体结束
								
//求两个整数中的比较大值的max函数						
int max(int x, int y)			
{
	int z;
	if(x > y){
		z = x;
	}else{
		z = y;
	}
	return(z);
}