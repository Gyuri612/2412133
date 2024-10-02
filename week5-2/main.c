#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int integer1,integer2;
	
	printf("Input two integers : ");
	scanf("%i %i",&integer1,&integer2);
	
	printf("+ result is %d\n",integer1+integer2);
	printf("- result is %d\n",integer1-integer2);
	printf("* result is %d\n",integer1*integer2);
	printf("/ result is %d\n",integer1/integer2);
	printf("%% result is %d\n",integer1%integer2);
	
	return 0;
}
