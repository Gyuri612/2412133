#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int answer=50;
	int num;
	int trial=0;
	
	do
	{
		printf("Enter a number: ");
		scanf("%i",&num);
		trial = trial+1 ;

		if (num>answer)
		printf("High!\n");
		else if (num<answer)
		printf("Low!\n");
	}while (num!=answer);
	
	printf("Congratulation!\ntrial : %i", trial);
	
	return 0;
}
