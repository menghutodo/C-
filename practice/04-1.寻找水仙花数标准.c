#include <stdio.h>
#include <math.h>
int main()
{
	//输入位数n 
	int n;
	scanf("%d",&n);
	
	//产生n位数的最小数
	int first=1;
	int i=1;
	while (i<n){
		first *=10;
		i++; 
	} 
	
	//遍历n位数
	i=first;
	while (i<first*10){
		int t=i;//临时变量记录i，以便把对i分解转化为对t分解 
		int sum=0;//和记录每一位数的n次幂累加的结果
		//以下对t进行分解 
		do{
			int d=t%10;
			t /=10;
			sum += pow(d,n); 
		}
		while(t>0);
		if (sum==i){
			printf("%d\n",i);
		}
		i++;
	} 
	
	return 0;
}
