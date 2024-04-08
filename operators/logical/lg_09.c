#include <stdio.h>

int main()
{
	int x = 10;
	int y = 13;
	int z;

	z = x || ++y;

	printf("z = %d\n", z);
	printf("y = %d\n", y);
}
