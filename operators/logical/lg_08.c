#include <stdio.h>

int func(void)
{
	printf("func cagrildi\n");
	return 0;
}


int foo(void)
{
	printf("foo cagrildi\n");
	return 10;
}

int main()
{
	//func() && foo();
	//func() || foo();
	//foo() && func();
	foo() || func();
}
