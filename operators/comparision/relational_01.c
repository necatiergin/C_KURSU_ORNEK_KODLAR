#include <stdio.h>

int main()
{
	int x, y;
	printf("iki tamsayi girin: ");
	(void)scanf("%d%d", &x, &y);

	printf("%d >  %d = %d\n", x, y, x > y);
	printf("%d >= %d = %d\n", x, y, x >= y);
	printf("%d <  %d = %d\n", x, y, x < y);
	printf("%d <= %d = %d\n", x, y, x <= y);
	printf("%d == %d = %d\n", x, y, x == y);
	printf("%d != %d = %d\n", x, y, x != y);
}
