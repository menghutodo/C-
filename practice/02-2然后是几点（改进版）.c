#include <stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int w;
	int present_hour,present_minute,outcome;
	printf("��ǰ��ʱ����");
	scanf("%d",&x);
	printf("���ŵ�ʱ����");
	scanf("%d",&y);
	
	z=x/100;
	w=x%100;

	present_hour=(z*60+w+y)/60;
	present_minute=(z*60+w+y)%60;
	
	outcome=present_hour*100+present_minute;
	
	printf("���ڵ�ʱ����%d",outcome);
	
	return 0;
}
