#include <stdio.h>

int g = 99;

int func(int x)
{
	return ++g, x + g;
}

int main()
{

	int a = 5;
	int b;
	
	printf("g = %d\n", g);
	b = func(a);

	printf("b = %d\n", b);
	printf("g = %d\n", g);
}
