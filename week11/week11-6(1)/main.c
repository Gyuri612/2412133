#include <stdio.h>

void main(void)
{
	FILE *fp=NULL;
	char c;

	fp=fopen("C:\\Users\\gram\\Documents\\2412133\\sample.txt","r");

	if (fp==NULL)
		printf("Failed to open file\n");
	
	while((c=fgetc(fp))!=EOF)
		putchar(c);
	
	fclose(fp);
}
