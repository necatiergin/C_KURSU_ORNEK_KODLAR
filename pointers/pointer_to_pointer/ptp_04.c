#include <stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int* p = a;
	int** ptr = &p;

	(*ptr)[4] = 76;
	for (int i = 0; i < 5; ++i) {
		printf("%d ", a[i]);
	}
}
