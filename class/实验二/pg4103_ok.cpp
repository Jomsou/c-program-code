#include<stdio.h>
main()
{
	float sn=100.0,hn=sn/2;
	int n;
	for(n=2;n<=10;n++)
	{
		sn=sn+2*hn;  
		hn=hn/2; 
	}
	printf("共经过 %f米\n",sn);
	printf("第十次反弹%f 米\n",hn);
	
}