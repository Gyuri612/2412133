#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum;
	int num;
	
	printf("Enter a number: ");
	scanf("%i",&num);
	
	for(sum=0; num>0; num--)
	{
		sum=sum+num;
	}
	printf("The result is %i", sum);
	
	return 0;
}
