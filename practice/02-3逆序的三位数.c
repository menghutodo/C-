#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y1;
	y1=x/100; 
	int y2;
	y2=(x-y1*100)/10;
	int y3;
	y3=(x-y1*100-y2*10);
	
	int z;
	z=y3*100+y2*10+y1;
	printf("%d",z);
	return 0;
}
