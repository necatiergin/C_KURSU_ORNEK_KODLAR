#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	int z;

	z = (x, y);
	printf("z = %d\n", z);
	z = (y, x);
	printf("z = %d\n", z);
}
