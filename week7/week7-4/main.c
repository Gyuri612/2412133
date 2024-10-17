#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(int x)
{
	printf("Enter the value: ");
	scanf("%i",&x);
	
	return x;
}

int factorial(int y)
{	
	int i;
	int res = 1;
	for(i=1; i<=y; i++)
		res = res*i;
	return res;
}

int combination(int a, int b)
{	
	return factorial(a)/(factorial(a-b)*factorial(b));
	
}

int main(void)
{
	int n;
	int r;
	
	n=get_integer(n);
	r=get_integer(r);
	
	
	printf("The result of C(%i, %i) is %i",n,r,combination(n,r));
	
	return 0;
	
}
