#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float integer_1;
	float integer_2;
	
	printf("Enter two integers : ");
	scanf("%f, %f", &integer_1, &integer_2);
	
	printf("%.6f / %.6f = %.6f", integer_1, integer_2, integer_1/integer_2);
	
	return 0;
}
