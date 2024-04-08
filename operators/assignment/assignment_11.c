#include <stdio.h>

int main()
{
	int x = 100, y = 7, z = 5, t = 3;

	x -= y += z *= t;

	printf("z = %d\n", z);
	printf("y = %d\n", y);
	printf("x = %d\n", x);
	
}
