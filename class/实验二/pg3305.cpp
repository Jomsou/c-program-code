#include<stdio.h>

int main(void)
{
	int year, month, day, sum;
	printf("�������ꡢ�¡��գ�\n");
	scanf("%d,%d,%d", &year ,&month, &day);
	
	//�ж�����Ƿ�������
	if (year%4==0 && year%100!=0 ||year%400==0)
	{
		//��������·ݵ����
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
		//ƽ������·ݵ����
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
	printf("��һ����%d��ĵ�%d��\n", year, sum);
	
	return 0; 
}