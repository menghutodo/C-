#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	for (int i=a;i<a+4;i++){
		for (int j = a;j<a+4;j++){
			for (int k=a;k<a+4;k++){
				if (i!=j){
					if (i!=k){
						if (j!=k){
							printf("%d\n",i*100+j*10+k);
						}
					}
				}
			}
		}
		
	}
	return 0;
}
