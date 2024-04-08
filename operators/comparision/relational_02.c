#include <stdio.h>

int main()
{
	int x;
	printf("bir tamsayi girin: ");
	(void)scanf("%d", &x);

	printf("sign (%d) = %d\n", x, (x > 0) - (x < 0));
}
