/*
	ʱ��: 2017.10.11 10:00
	Ŀ�ģ� ��ϰö�� 
*/
#include<stdio.h>

//ָ��һ��ö���������� 
enum Weekday
{
	Monday, Tuesday, Wednesday, Thursday, Friday, Satrday, Sunday
};
//Ϊ���Ǵ�ӡ�Ķ����������߼�������ĺ��� 
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
	//��ö���������� ����һ������ 
	enum Weekday day = Sunday;
	f(day);
	
	return 0;
} 

/*
�ܽ᣺
	ö�پ��ǽ�������Ч�ķ���һһ���г��ԡ� 
*/ 
