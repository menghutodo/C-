#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
//�����������������Լ��
	//ȷ�����Լ���ķ�Χ��2~min{a,b} 
	int min;
	if (a<b){
		min=a;
	} 
	else {
		min=b;
	}
	//�������п����ǹ�Լ���������ж���һ������ ��a�������ܱ�b����
	int i;
	for (i=min;i>=min;i--){
		if (a%i==0 && b%i==0){
			//printf("%d",i);
			break;
		}
	}
	int x,y;
	x=a/i;
	y=b/i;
	printf("%d/%d",x,y); 
	return 0;
 } 
