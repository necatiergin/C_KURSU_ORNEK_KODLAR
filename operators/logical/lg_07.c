#include <stdio.h>

//kısa devre davranışı (short circuit behavior)

int main()
{
	int x = 0;
	int y = 23;
	int z;

	z = x && ++y;

	printf("z = %d\n", z);
	printf("y = %d\n", y);
}
