#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if (N%5 != 0 && N%5<=3){//"!="意思是“不等于”，“&&”表示“and” 
		printf("Fishing in day %d",N);
	}
	else {
		printf("Drying in day %d",N);
	}
	return 0;
}
