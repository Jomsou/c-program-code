#include <stdio.h>
int main()
{
	int i,t;
	t = 1;
	i = 2;
	while(i<=5){
		t*=i;
		i++;
	}
	printf("%d", t);
	return 0;
}
