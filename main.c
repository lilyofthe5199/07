#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter)
{
	counter++;
	return counter;
}

int main(int argc, char *argv[])
{
	int i=0;
	
	printf("함수 호출전 i=%d\n", i); // i=0
	inc(i);
	printf("함수 호출후 i=%d\n", i); // i=0
	
	return 0;
}

