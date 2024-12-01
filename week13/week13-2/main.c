#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	int x;
	int y;
};

int main(void){
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("Input p1 coordinate(x y):");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("Input p2 coordinate(x y):");
	scanf("%d %d", &p2.x, &p2.y);

	printf("distance: %f", sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
	
	return 0;
	
}
