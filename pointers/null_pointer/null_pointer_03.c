#include <stdio.h>

int main(void)
{
	int* p = NULL; 
	
	int x = *p; //ub - null pointer dereferencing
	int y = p[0]; //ub - null pointer dereferencing
}
