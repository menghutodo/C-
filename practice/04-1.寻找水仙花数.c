#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);

	//确定first
	int first=1;
	for (int i=1;i<n;i++){
		first *=10;
	} 
	//printf("%d",first);
	
	//遍历所有n位数
	int i=first;
	
	for (i;i<first*10;i++){
		//printf("%d\n",i);
		int d=i;
		int sum = 0;
		while (d>0){
			int t = d % 10;
			d /=10;
			sum += pow(t,n);
			}
		if (sum==i){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
