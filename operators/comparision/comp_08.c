//yanliş olan ne?

#include <stdio.h>

int main()
{
	int x;
	
	printf("bir tamsayi girin: ");
	(void)scanf("%d", &x);
	if (10 < x < 20)
		printf("%d (10 - 20) araliginda\n", x);
	else
		printf("%d (10 - 20) araliginda degil\n", x);
}
