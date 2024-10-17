#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1;
	int n2;
	char o;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &n1, &o, &n2);
	
	if (o==42)					// *
		printf("=%i",n1*n2);
	else if(o==43)				// +
		printf("=%i",n1+n2);
	else if(o==45)				// -
		printf("=%i",n1-n2);
	else if(o==47)				// /
		printf("=%i",n1/n2);

	return 0;
}
