#include<stdio.h> 

enum Weekday
{
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
void f(enum Weekday i)
{
	switch(i)
	{
		case 0:
		printf("Monday!\n");
		break;
	}
}
int main(void)
{
	enum Weekday day = Monday;
	f(day);
	
	return 0;
}
