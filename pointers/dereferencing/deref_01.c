#include <stdio.h>

int main(void)
{
	int x = 10;
	int* p = &x;
	int a[3] = { 5, 10, 15 };

	//int i1 = *x; //invalid. The operand must be a pointer
	int i2 = *p; // int i2 = x;
	int i3 = *a; // int i3 = a[0];
	int i4 = *&x; // int i4 = x;

	printf("i2 = %d\n", i2);
	printf("i3 = %d\n", i3);
	printf("i4 = %d\n", i4);
}
