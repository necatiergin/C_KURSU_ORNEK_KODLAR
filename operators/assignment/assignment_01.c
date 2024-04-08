#include <stdio.h>

int main()
{
	int x = 10;

	printf("x = %d\n", x);

	printf("%d\n", x = 7);

	printf("x = %d\n", x);
}
