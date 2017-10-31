#include<stdio.h>

int main(void)
{
	int year, month, day, sum;
	printf("请输入年、月、日：\n");
	scanf("%d,%d,%d", &year ,&month, &day);
	
	//判断年份是否是闰年
	if (year%4==0 && year%100!=0 ||year%400==0)
	{
		//闰年各个月份的情况
		switch(month)
		{
		case 1:
			{
				sum = day;
				
				break;
			}
		case 2:
			{	
				sum = 31 + day;
				
				break;
			}
		case 3:
			{
				sum = 31 + 29 + day;
				
				break;
			}
		case 4:
			{
				sum = day;
				
				break;
			}
		case 5:
			{
				sum = 31 + 29 + 31 + 30 + day;
				
				break;
			}
		case 6:
			{
				sum =  31 + 29 + 31 + 30 + 31 + day;
				
				break;
			}
		case 7:
			{
				sum = 31 + 29 + 31 + 30 + 31 + 30 + day;
				
				break;
			}
		case 8:
			{
				sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
				
				break;
			}
		case 9:
			{
				sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
				
				break;
			}
		case 10:
			{
				sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30+ day;
				
				break;
			}
		case 11:
			{
				sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
				
				break;
			}
		case 12:
			{
				sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30+ day;
				
				break;
			}
		}
	}
	else{
		//平年各个月份的情况
		switch(month)
		{
			case 1:
				{
					sum = day;
					
					break;
				}
			case 2:
				{
					sum = 31 + day;
					
					break;
				}
			case 3:
				{
					sum = 31 + 28 + day;
					
					break;
				}
			case 4:
				{
					sum = day;
					
					break;
				}
			case 5:
				{
					sum = 31 + 28 + 31 + 30 + day;
					
					break;
				}
			case 6:
				{
					sum =  31 + 28 + 31 + 30 + 31 + day;
					
					break;
				}
			case 7:
				{
					sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
					
					break;
				}
			case 8:
				{
					sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
					
					break;
				}
			case 9:
				{
					sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
					
					break;
				}
			case 10:		
				{
					sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+ day;
					
					break;
				}
			case 11:
				{
					sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
					
					break;
				}
			case 12:
				{
					sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30+ day;
					
					break;
				}
		}
	}
	printf("这一天是%d年的第%d天\n", year, sum);
	
	return 0; 
}