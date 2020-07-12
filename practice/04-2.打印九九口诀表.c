#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int product=1; 
	for (int j=1;j<=n;j++){	
		for(int i=1;i<=j ;i++){
			product = i*j;
			printf("%d*%d=%d",i,j,product);
			if (product<10){
				printf("   ");
			}
			else {
				printf("  ");
			}
			if (i==j){
				printf("\n");
			}
		}
	}
	return 0;
 } 
