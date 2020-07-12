#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	int count=0;
	int num=0; 
	int sum=0;
	for (i=m;i<=n;i++){
		for (j=2;j<i;j++){
			if (i%j==0){
				count++;
			}

		}
		if (count==0){
				num++;
				sum+=i;
			}
		else{
			count=0; 
		}
			
	} 
	printf("%d %d",num,sum);
	
	return 0;
}
