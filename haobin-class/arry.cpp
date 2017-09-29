#include <stdio.h>

int main()
{
	int a[3][4] = {
		{1, 2, 3, 10},
		{4, 5, 6, 11},
		{7, 8, 9, 12}
	};
	int i, j ;
	for (i = 0;i < 3;i++){
		for (j = 0; j < 4;j++){
			printf("%d   ", a[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
