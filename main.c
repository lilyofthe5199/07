#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);

int i;

int main(void)
{
	for (i=0; i<5; i++) // i=10인 상태 
	{
		f();
	}
	return 0;
}

void f(void)
{
	for (i=0; i<10; i++) // # 10번 출력 
		printf("#");
}
