/*
	时间：2017.10.07 15:50 
	目的：想出水仙花数字背后的简单算法 
*/
#include<stdio.h>

int main(void)
{
	int num, sd, td, hd;
	//遍历所有的三位数 
	for (num=100;num<999;num++){
		//第一种方法得到个十百上的数字 
	    //hd = num/100;
	    //td = (num-hd*100)/10; 
	    //sd = num-hd*100-td*10;
	    //第二种方法得到个十百上的数字 
	    hd = num/100;
		td = (num%100)/10;
		sd = num%10; 
		//枚举法
		if(num == hd*hd*hd+td*td*td+sd*sd*sd){
			printf("%d\n", num);
		}
	}
	
	return 0;
}

/*
总结：有些算法要靠试数得出来的 

*/ 
