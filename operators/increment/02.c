#include <stdio.h>

int main()
{
	int x = 20;
	int y;

	y = x++;
	/*y = x;
	x = x + 1;*/

	printf("y = %d\n", y);
	printf("x = %d\n", x);
}
