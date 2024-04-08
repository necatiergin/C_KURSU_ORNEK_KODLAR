#include <stdio.h>

int func(void);

int main()
{
	int x;

	
	//x = func();
	//if (x == -1) {
	//	printf("hata, func islevi isini yapamadi\n");
	//	return 1;
	//}

	if ((x = func()) == -1) {
		printf("hata, func islevi isini yapamadi\n");
		return 1;
	}
}
