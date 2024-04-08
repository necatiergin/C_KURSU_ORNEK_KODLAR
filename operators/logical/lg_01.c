#include <stdio.h>

int main()
{
	int ival;
	printf("bir tamsayi girin: ");
	(void)scanf("%d", &ival);

	printf("!(%d) ===> %d\n", ival, !ival);
	printf("!!(%d) ===> %d\n", ival, !!ival);
}
