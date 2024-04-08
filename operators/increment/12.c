#include <stdio.h>

int main()
{
	int x = 8; //9
	int y = 3; //4

	printf("%d\n", ++x - ++y);  
	printf("%d\n", x++ + ++y);  

}
