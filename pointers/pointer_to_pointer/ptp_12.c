#include <stdio.h>

void print_array(const int* p, int size)
{
	while (size--)
		printf("%d ", *p++);

	printf("\n");
}

int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int* pa[10];
	int** pp[10];

	print_array(a, 10);
	for (int i = 0; i < 10; ++i)
		pa[i] = a + i;

	for (int i = 0; i < 10; ++i)
		pp[i] = pa + i;

	//
	for (int i = 0; i < 10; ++i)
		++**pp[i];

	print_array(a, 10);
}
