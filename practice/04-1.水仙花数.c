#include <stdio.h>
#include <math.h> 
int main()
{
	int x;
	scanf("%d",&x);
	int t;
	t=x;
	int N;
	for (N=0;x>0;N++){
		x /=10;
	}
	//printf("%d",N);
	//���������λ��N
	
	
	int y;
	int z=0;
	int b=t;
	while (t>0){
		y=pow(t%10,N);
		t /=10;
		//printf("%d \n",y);
		z +=y;
		//printf("%d \n",z); 
		if (z==b){ 
			printf("%d��ˮ�ɻ���",b);
		}
	}
	
	return 0;
 } 
