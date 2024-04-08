#include <stdio.h>

//lojik ve/veya operatörleri sequence point oluşturur.

int foo(int val)
{
	printf("val = %d\n", val);
	//
	return  20;
}


int main()
{
	int x = 10;

	//int ival = ++x && foo(x);
	int ival = x++ && foo(x);
}
