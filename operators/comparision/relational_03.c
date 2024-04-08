#include <stdio.h>

int main()
{
	int x, y;
	int a;

	printf("iki tamsayi girin: ");
	(void)scanf("%d%d", &x, &y);
	a = x == y;

	printf("a = %d\n", a);
}
