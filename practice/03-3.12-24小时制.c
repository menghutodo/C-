#include <stdio.h>
int main()
{
	int x,y;
	printf("���ڵ�ʱ���ǣ�");
	scanf("%d:%d",&x,&y);
	if (x<=12){
		printf("%d:%dAM",x,y);
	}
	else if (x==12){
		printf("%d:%dPM",x,y);
	}
	else if (x>12){
		printf("%d:%dPM",x-12,y);
	}
	return 0;
}
