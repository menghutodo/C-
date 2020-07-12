#include <stdio.h>
int main()
{
	int v;
	printf("ÇëÊäÈëËÙ¶È£º");
	scanf("%d",&v);
	if (v>60){
		printf("%d Speeding",v);
	}
	else {
		printf("%d OK",v);
	}
	return 0;
}
