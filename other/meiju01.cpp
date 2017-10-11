/*
	时间: 2017.10.11 10:00
	目的： 复习枚举 
*/
#include<stdio.h>

//指定一种枚举数据类型 
enum Weekday
{
	Monday, Tuesday, Wednesday, Thursday, Friday, Satrday, Sunday
};
//为了是打印的东西更符合逻辑，定义的函数 
void f(enum Weekday i)
{
	switch(i)
	{
		case 0:
			printf("Monday!\n");
			break;
		case 1:
			printf("Tuesday!\n");
			break;
		case 2:
			printf("Wednesday!\n");
			break;
		case 3:
			printf("Thursday!\n");
			break;
		case 4:
			printf("Friday!\n");
			break;
		case 5:
			printf("Satrday!\n");
			break;
		case 6:
			printf("Sunday!\n");
			break;		
	}
}
int main(void)
{
	//用枚举数据类型 定义一个变量 
	enum Weekday day = Sunday;
	f(day);
	
	return 0;
} 

/*
总结：
	枚举就是将所有有效的方法一一进行尝试。 
*/ 
