#include <stdio.h>				//这是编译预处理指令 
int main()      				//定义主函数 
{
	int max(int x,int y,int t);		//对被调用函数max的声明 
	int a, b, c, d;	    		//定义变量a,b,c
	scanf("%d, %d, %d", &a,&b,&c);		//输入变量a和b的值                                     
	d = max(a,b,c);				//调用max函数，将得到的值赋值给c 
	printf("max=%d\n",d);		//输出c的值 
	return 0; 					//返回函数的值为 0 
}								//主函数体结束
//求两个整数中的最大值的max函数 
int max(int x,int y,int t)			//定义max函数，函数值为整型，形式参数x和y为整型 
{
	int z;						//max函数的声明部分，定义本函数中用到的变量z为整型 
	if(x>y&&x>t){
		z = x;
	}else if(y>x&&y>t){
		z = y;
	}else{
		z = t;
	}
	return(z);
}
