//son ek ++ ve -- operatörleri operandı olan nesnenin değerini üretir

#include <stdio.h>

int main()
{
	int x = 20;
	int y = 20;

	printf("%d\n", x++);
	printf("%d\n", y--);
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}
