#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
//下面找两个数的最大公约数
	//确定最大公约数的范围：2~min{a,b} 
	int min;
	if (a<b){
		min=a;
	} 
	else {
		min=b;
	}
	//对于所有可能是公约数的数，判断那一个既能 被a整除又能被b整除
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
