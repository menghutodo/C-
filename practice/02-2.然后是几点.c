#include <stdio.h>
int main()
{
	int hour;
	int minute;
	int pass;
	
	printf("��������ʼʱ�䣺");
	scanf("%d %d",&hour,&minute);
	printf("���������ŵķ�������");
	scanf("%d",&pass);
	
	int now_hour = (hour*60+minute+pass)/60;
	int now_minute = (hour*60+minute+pass)%60;
	
	printf("���ڵ�ʱ���ǣ�%d %d",now_hour,now_minute);
	
	return 0;
 } 
