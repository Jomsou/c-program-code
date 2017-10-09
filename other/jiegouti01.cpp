/*
	时间： 2010.10.09 17:11
	目的： 学习结构体的两种获取成员的方式 
*/
#include<stdio.h>

int main(void)
{
	//定义一个结构体类型变量
	struct  Student
	{
		int age;
		char sex;
		char name[100];
	};
	struct Student st = {20,'F',"marry"};
	//定义一个结构体类型的指针变量 
	struct Student * pst = &st;
	//结构体变量的两种获取成员的方式
	printf("%d %c %s\n",st.age,st.sex,st.name);
	printf("%d %c %s",pst->age,pst->sex,pst->name);	
		
	return 0;
} 


/*
----------------------------------------------
总结：
	结构体变量的两种获取成员的方式 ：
	1.变量名.成员,如st.age 
	2.指针变量名->成员，如stuct Student * pst = &st; pst->age,pst->sex,pst->name
----------------------------------------------


*/ 
