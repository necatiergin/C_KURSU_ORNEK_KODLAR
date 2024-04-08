#include <stdio.h>

int main()
{
	int x = 20;
	int y = 40;
	int z;

	//++x;
	//y += x;
	//z = x + y;

	++x, y += x, z = x + y;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
}
