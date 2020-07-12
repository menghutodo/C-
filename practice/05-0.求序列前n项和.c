#include <stdio.h>
int main()
{
	double x=2.0,y=1.0;
	double t;
	double sum = 0;
	int end;
	scanf("%d",&end);
	for (int i=1;i<=end;i++){
		sum +=1.0*x/y;
		t=x*1.0;
		x=x+y;
		y=t;
	}
	printf("%.2f",sum);//.2f表示小数点后保留两位小数 
	return 0;
}
