#include <stdio.h>
int main()
{
	int cm;
	double m;
	
	printf("�����볤�ȣ�cm��:");
	scanf("%d",&cm);
	m=cm/100.0;
	
	int foot = m/0.3048;
	int inch = (m/0.3048-foot)*12;
	
	printf("%d���׿ɻ���� %dӢ�� %dӢ��",cm,foot,inch); 
	
	return 0;
}
