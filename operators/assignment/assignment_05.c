#include <stdio.h>

// warning C4706: assignment within conditional expression

int main()
{
	int x;

	printf("bir tamsayi girin: ");
	scanf("%d", &x);

	if (x = 5) {
		printf("evet dogru x = %d\n", x);
	}
	else {
		printf("hayir yanlis x = %d\n", x);
	}

	printf("x = %d\n", x);
}
