#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	char c;
	
	printf("Input a string: ");
	
	while((c=getchar())!='\n')
	{
	if(c==48)
	num++;
	else if (c==49)
	num++;
	else if (c==50)
	num++;
	else if (c==51)
	num++;
	else if (c==52)
	num++;
	else if (c==53)
	num++;
	else if (c==54)
	num++;
	else if (c==55)
	num++;
	else if (c==56)
	num++;
	else if (c==57)
	num++;
		};	
	printf("%i",num);
	
	return 0;
}
