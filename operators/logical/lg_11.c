#include <stdio.h>

int get_mid(int a, int b, int c)
{
	if (!(a > b && a > c || a < b && a < c))
		return a;

	if (!(b > a && b > c || b < a && b < c))
		return b;

	return c;
}


int main()
{
	int x, y, z;
	printf("uc tamsayi girin: ");
	(void)scanf("%d%d%d", &x, &y, &z);

	printf("%d %d ve %d sayilarinin ortancasi %d\n", x, y, z, get_mid(x, y, z));
}
