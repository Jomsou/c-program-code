/*
	ʱ�䣺2017.10.07 15:50 
	Ŀ�ģ����ˮ�ɻ����ֱ���ļ��㷨 
*/
#include<stdio.h>

int main(void)
{
	int num, sd, td, hd;
	//�������е���λ�� 
	for (num=100;num<999;num++){
		//��һ�ַ����õ���ʮ���ϵ����� 
	    //hd = num/100;
	    //td = (num-hd*100)/10; 
	    //sd = num-hd*100-td*10;
	    //�ڶ��ַ����õ���ʮ���ϵ����� 
	    hd = num/100;
		td = (num%100)/10;
		sd = num%10; 
		//ö�ٷ�
		if(num == hd*hd*hd+td*td*td+sd*sd*sd){
			printf("%d\n", num);
		}
	}
	
	return 0;
}

/*
�ܽ᣺��Щ�㷨Ҫ�������ó����� 

*/ 
