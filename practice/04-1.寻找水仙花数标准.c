#include <stdio.h>
#include <math.h>
int main()
{
	//����λ��n 
	int n;
	scanf("%d",&n);
	
	//����nλ������С��
	int first=1;
	int i=1;
	while (i<n){
		first *=10;
		i++; 
	} 
	
	//����nλ��
	i=first;
	while (i<first*10){
		int t=i;//��ʱ������¼i���Ա�Ѷ�i�ֽ�ת��Ϊ��t�ֽ� 
		int sum=0;//�ͼ�¼ÿһλ����n�����ۼӵĽ��
		//���¶�t���зֽ� 
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
