#include <stdio.h>

void foo(void)
{
	static int* ip;
	
	printf("%d\n", ip == NULL); //prints out 1
}

int main(void)
{
	foo();
}
