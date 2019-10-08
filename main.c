#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=0;
	char c;
	
	printf("input a string: ");
	
	while((c=getchar())!='\n')
	{
		if (c>='0', c<='9')
		n++;
	}
	
	printf("the number of digits is %d",n);
	
	return 0;
}
