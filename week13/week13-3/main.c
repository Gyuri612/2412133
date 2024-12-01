#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};

void main(void)
{
	struct student s[STUDENTNUM];
	int i;
	double sum_score;
	int high_score;
	int high_score_ID;
	
	for(i=0;i<4;i++)
	{
		printf("Input the ID: ");
		scanf("%i",&s[i].ID);
		printf("Input the score: ");
		scanf("%i",&s[i].score);
		sum_score=sum_score+s[i].score;
	}
	
	s[0].score=high_score;
	
	for(i=0;i<4;i++)
	{
		if(s[i].score>=high_score)
		{
			high_score=s[i].score;
			high_score_ID=s[i].ID;
		}
	}
	
	printf("The average of the score: %f\n",sum_score/4);
	printf("The high score - ID: %i, score: %i\n",high_score_ID,high_score);
	
}
