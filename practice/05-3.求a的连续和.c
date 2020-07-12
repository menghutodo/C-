#include <stdio.h>
#include <math.h>
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	int i;
	int sum=0;
	int d=0; 
	for (i=1;i<=n;i++){
		d +=pow(10,i-1)*a; 
		sum +=d;
	}
	printf("%d",sum);
	return 0;
}
