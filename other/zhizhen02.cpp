#include<stdio.h>
#include<string.h>

void InputStudent(struct Students *ps)
{
	*(ps).age = 20;
	strcpy(ps->name, "carry");	
	ps->sex = 'M';
}
void OutputStudent(struct Student *p)
{
	printf("%d %c %s\n", p->age, p->sex, p->name);
}
int main(void)
{
	struct Students
	{
		int age;
		char sex;
		char name[100];
	};
	struct Students st = {10,'F',"marry"};
	InputStudent(&st);
	OnputStudent(&st);
	
	return 0;
}

