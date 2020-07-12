#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int count = 0;//计数器（每行六个） 
	
	for (int i=a;i<a+4;i++){
		for (int j = a;j<a+4;j++){
			for (int k=a;k<a+4;k++){
				if (i!=j && i!=k && j!=k){
							printf("%d",i*100+j*10+k);
							count++;
							if (count%6==0){
								printf("\n");
							}
							else {
								printf(" ");
							}
				}
			}
		}
		
	}
	return 0;
}
