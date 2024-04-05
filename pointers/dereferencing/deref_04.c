#include <stdio.h>

int main(void)
{
	int a[5] = { 10, 20, 30, 40, 50 };

	*a = 99;
	printf("%d\n", a[0]);
	printf("%d\n", *a);
	
	++*a;

	printf("%d\n", a[0]);
	printf("%d\n", *a);
}
