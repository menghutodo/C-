#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请按顺序输入A,B,C三个球的重量：");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b){
		printf("C");
	} 
	else if(a!=b && b==c){
		printf("A");
	}
	else{
		printf("B");
	}
	return 0;
 } 
