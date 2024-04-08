#include <stdio.h>

int func(void);
void foo(int);

int main()
{
	int x;

	//x = func();
	//if (x > 0) {
	//	printf("xyz....");
	//}

	if ((x = func()) > 0) {
		foo(x);
	}

}
