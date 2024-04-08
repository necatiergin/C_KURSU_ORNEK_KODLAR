#include <stdio.h>

int main()
{
	int x = 13;
	int y = 4;

	printf("%d\n", ++x % y--);
	printf("%d\n", x++ % --y);
	printf("%d\n", x % y); 

}
