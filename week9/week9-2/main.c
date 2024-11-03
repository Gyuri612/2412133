#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* 변수 temp가 for 블럭 안에서만 생존하기 때문에 

'temp=1 
temp=1
temp=1
temp=1
temp=1'

의 출력값을 가질 것이다. 

 */

int main(void) 
{
	int i;
	
	for(i=0; i<5; i++)
	{
		int temp=1;
		printf("temp=%d\n",temp);
		temp++;
	}
	
	return 0;
}
