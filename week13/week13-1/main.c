#include <stdio.h>
#include <stdlib.h>

struct student{
int ID;
char Name[10];
double Grade;
};

int main(void)
{
	struct student s={1, "zzz", 1.1};
	
	printf("Input the ID : ");
	scanf("%d", &s.ID);
	
	printf("Input the Name : ");
	scanf("%s", &s.Name);
	
	printf("Input the Grade : ");
	scanf("%lf", &s.Grade);
	
	printf("ID: %d\n", s.ID);
	printf("Name: %s\n", s.Name);
	printf("Grade: %f\n", s.Grade);
}
