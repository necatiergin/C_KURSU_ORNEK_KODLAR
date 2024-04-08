#include <stdio.h>

int main()
{
	int x = 12;
	int y = 7;

	printf("%d\n", ++x % y--);
	printf("%d\n", x++ % --y);
}
