#include <stdio.h>

int main()
{
	int i, k;

	///
	for (i = 1, k = 2; i * k < 100000; ++i, k += i) {
		printf("%d %d\n", i, k);
	}
}
