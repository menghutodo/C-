#include <stdio.h>
int main()
{
	int cm;
	double m;
	
	printf("请输入长度（cm）:");
	scanf("%d",&cm);
	m=cm/100.0;
	
	int foot = m/0.3048;
	int inch = (m/0.3048-foot)*12;
	
	printf("%d厘米可换算成 %d英尺 %d英寸",cm,foot,inch); 
	
	return 0;
}
