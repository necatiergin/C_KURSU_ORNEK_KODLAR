#include <stdio.h>

int main()
{
	int x;

	printf("4 basamakli bir tam sayi girin: ");
	(void)scanf("%d", &x); //6519
	printf("binler basamagi   = %d\n", x / 1000);
	printf("yuzler basamagi   = %d\n", x % 1000 / 100);
	printf("yuzler basamagi   = %d\n", x / 100 % 10);
	printf("onlar  basamagi   = %d\n", x % 100 / 10);
	printf("onlar  basamagi   = %d\n", x / 10 % 10);
	printf("birler basamagi   = %d\n", x % 10);
}
