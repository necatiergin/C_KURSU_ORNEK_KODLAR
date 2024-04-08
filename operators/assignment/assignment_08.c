#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	int n;
	//code

	if ((p = malloc(n * sizeof(int))) == NULL) {
		printf("bellek yetersiz\n");
		return 1;
	}

}
