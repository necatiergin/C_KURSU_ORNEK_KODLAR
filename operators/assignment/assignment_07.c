#include <stdio.h>

int main()
{
	FILE *f;

	if ((f = fopen("ali.txt", "r")) == NULL) {
		printf("dosya acilamadi\n");
		return 1;
	}
}
