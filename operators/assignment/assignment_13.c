#include <stdio.h>


int main()
{
	int a = 5;
	int x;

	x = a + (a = 90);  //ub

	printf("x = %d\n", x);
}
