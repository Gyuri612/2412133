#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("Enter an integer: ");
	scanf("%i",&number);
	
	if (number<0)
		printf("This is negative number.\n");
	else if (number==0)
		printf("This is 0.\n");
	else if (number>0)
		printf("This is positive number.\n");
	
	return 0;
}
