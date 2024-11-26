#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];
	int sum=0;
	int *p=grade; 
	
	for(i=0;i<5;i++)
	{
		printf("Input value - grade[%i] = ",i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("grade[%i] = %i\n", i, *(p+i));
		sum += *(p+i);
	}
	
	printf("Average: %i", sum/5);
	
 
	
	return 0;
}
