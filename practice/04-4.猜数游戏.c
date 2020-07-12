#include <stdio.h>
int main()
{
	int number,n;
	scanf("%d %d",&number,&n);
	
	int inp;
	int count=0;
	int finished=0;//控制循环要不要退出 
	do{
		scanf("%d",&inp);
		count++;
		if (inp<0){
			printf("GAME OVER!\n");
			finished = 1;
		}
		else if (inp > number){
			printf("TOO BIG\n");
		}
		else if (inp <number){
			printf("TOO SMALL\n");
		}
		else {
			if (count==1){
				printf("Bingo!\n");
			}
			else if(count<=3){
				printf("Lucky you!\n");
			}
			else {
				printf("Good guess!\n"); 
			} 
			finished=1;
		}
		if (count==n){
			if (!finished){
				printf("Game Over!");
				finished = 1;
			}
		}
	} while (!finished);
	return 0;
}
