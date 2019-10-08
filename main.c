#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=21, trial=0, input;
	
	do
	{
		printf("Guess a number: ");
		scanf("%d", &input);
		if(input<answer)
		{
			printf("low\n");
		}
		else if(input>answer)
		{
			printf("high\n");
		}
		trial++;
	}
	while(input!= answer);
		
		printf("Congratulation! trials: %d",trial);
	
	return 0;
}
