#include <stdio.h>

int main()
{
	int x, y;
	printf("iki tamsayi girin: ");
	scanf("%d%d", &x, &y);  //10  20

	if (x && y)
		printf("lojik ve dogru\n ");
	else
		printf("lojik ve yanlis\n ");

	if (x & y)
		printf("bitsel ve dogru\n ");
	else
		printf("bitsel ve yanlis\n ");
}
