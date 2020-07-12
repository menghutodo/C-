#include <stdio.h>
int main()
{
	int hour;
	int minute;
	int pass;
	
	printf("请输入起始时间：");
	scanf("%d %d",&hour,&minute);
	printf("请输入流逝的分钟数：");
	scanf("%d",&pass);
	
	int now_hour = (hour*60+minute+pass)/60;
	int now_minute = (hour*60+minute+pass)%60;
	
	printf("现在的时间是：%d %d",now_hour,now_minute);
	
	return 0;
 } 
