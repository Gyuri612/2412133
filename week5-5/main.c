#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int int1, int2;
	
	printf("Input two integers: ");
	scanf("%i %i", &int1, &int2);
	
	printf("& result is %i \n| result is %i \n^ result is %i \n<<1 result is %i \n>>1 result is %i", int1&int2, int1|int2, int1^int2, int1<<1, int1>>1);
	
	return 0;
}
