#include <stdio.h>

int main(void)
{
	int x = 5;
	int* p = &x;

	printf("x = %d\n", x);
	*p = 99;
	printf("x = %d\n", x);
	++*p; //++(*p)
	printf("x = %d\n", x);
}
