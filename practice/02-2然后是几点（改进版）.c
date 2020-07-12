#include <stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int w;
	int present_hour,present_minute,outcome;
	printf("当前的时间是");
	scanf("%d",&x);
	printf("流逝的时间是");
	scanf("%d",&y);
	
	z=x/100;
	w=x%100;

	present_hour=(z*60+w+y)/60;
	present_minute=(z*60+w+y)%60;
	
	outcome=present_hour*100+present_minute;
	
	printf("现在的时间是%d",outcome);
	
	return 0;
}
