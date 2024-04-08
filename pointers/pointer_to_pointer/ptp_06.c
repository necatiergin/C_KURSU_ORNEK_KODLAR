#include <stdio.h>

int main()
{
	double x = 1.10;
	double* p = &x;
	double** ptr = &p;

	printf("sizeof(p) = %zu\n", sizeof(p)); 
	printf("sizeof(*p) = %zu\n", sizeof(*p));  
	printf("sizeof(ptr) = %zu\n", sizeof(ptr));
	printf("sizeof(*ptr) = %zu\n", sizeof(*ptr));
}

/*
	SAMPLE OUTPUT

	sizeof(p) = 4
	sizeof(*p) = 8
	sizeof(ptr) = 4
	sizeof(*ptr) = 4
*/
