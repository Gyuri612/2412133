#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	char a[100];
	
	FILE *fp=NULL;
	
	fp=fopen("C:\\Users\\gram\\Documents\\2412133\\sample.txt","w");
	if(fp == NULL)
		printf("Failed to open file");
		
	for(i=0;i<3;i++)
	{
		printf("input a word: ");
		scanf("%s",&a);
		fprintf(fp,"%s\n",a);
	}
	
	fclose(fp);
	
	return 0;
}
