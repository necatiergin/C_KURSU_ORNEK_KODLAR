#include <stdio.h>

int main(void)
{
	int x = 10;
	int* p1 = NULL; 
	int* p2 = &x; 

	printf("%d\n", p1 == p2); //prints out 0
}
