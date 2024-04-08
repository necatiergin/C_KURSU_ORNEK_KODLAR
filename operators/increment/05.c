#include <stdio.h>


void func(int a)
{
	printf("beni %d degeri ile cagirdilar\n", a);
}

int main()
{
	int x = 10;
	int y = 50;

	printf("x = %d\n", x);
	func(x++);
	printf("x = %d\n", x);

	printf("y = %d\n", y);
	func(y--);
	printf("y = %d\n", y);
}
