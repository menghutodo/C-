#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if (N%5 != 0 && N%5<=3){//"!="��˼�ǡ������ڡ�����&&����ʾ��and�� 
		printf("Fishing in day %d",N);
	}
	else {
		printf("Drying in day %d",N);
	}
	return 0;
}
