#include <stdio.h>

int main()
{
	int x = 20;

	printf("x = %d\n", x);
	++x;
	printf("x = %d\n", x);
	x++;
	printf("x = %d\n", x);
	x = x + 1;
	printf("x = %d\n", x);
	x += 1;
	printf("x = %d\n", x);
	--x;
	printf("x = %d\n", x);
	x--;
	printf("x = %d\n", x);
	x = x - 1;
	printf("x = %d\n", x);
	x -= 1;
	printf("x = %d\n", x);
}
