#include <stdio.h>

int main()
{
	int x = 10;
	int y = x + ++x;  //UB

	printf("y = %d\n", y);
}
