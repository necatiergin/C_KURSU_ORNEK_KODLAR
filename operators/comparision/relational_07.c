#include <stdio.h>

int main()
{
	double dval = 0;

	for (int i = 0; i < 10; ++i) {
		dval += .1;
	}

	printf("dval = %f\n", dval);

	//neden?
	if (dval == 1.)
		printf("dogru\n");
	else
		printf("yanlis\n");
}
