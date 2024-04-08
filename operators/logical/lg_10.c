#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ozel veya operatörünün yerine gecen ifade

int main()
{
	int x, y;

	printf("iki tamsayi girin: ");
	scanf("%d%d", &x, &y);

	printf("%d ozel veya  %d = %d\n", x, y, !!x != !!y);
}

