# include <stdio.h>

int main(void)
{
	int i = 5;
	int * p;
	int * q;
		
	* p = *q;
	printf("%d\n", * p);
	
	return 0;
}
