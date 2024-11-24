#include <stdio.h>

void main(void)
{
	FILE *fp=NULL;
	char c[100];

	fp=fopen("C:\\Users\\gram\\Documents\\2412133\\sample.txt","r");

	if (fp==NULL)
		printf("Failed to open file\n");
		
	while(fgets(c, sizeof(c), fp)!=NULL)
		printf("%s", c);
	
	fclose(fp);
}
