#include <stdio.h>
int main()
{
	int a,b,c;
	printf("�밴˳������A,B,C�������������");
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
