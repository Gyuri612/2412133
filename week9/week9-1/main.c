#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(void) {
	
	int flag = 1;
	while(flag!=0)
	{
		int y;
		y=3;
		flag=0;
	}
	y=4;
	
	return 0;
}

#이 경우, y는 로컬 변수이기 때문에 while 블록 밖에서는 정의되지 않는다. 
#따라서 y를 while 블록 밖에서 정의해주면 컴파일 오류가 생기지 않는다. */

int main(void)
{
	int flag=1;
	int y;
	while(flag!=0)
	{
		y=3;
		flag=0;
	}
	y=4;
}
