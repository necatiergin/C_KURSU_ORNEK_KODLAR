#include <stdio.h>

int main()
{
	int x = 20;
	int y = 40;
	int temp;


	//temp = x;
	//x = y;
	//y = temp;

	temp = x, x = y, y = temp;

	printf("x = %d   y = %d\n", x, y);
}
