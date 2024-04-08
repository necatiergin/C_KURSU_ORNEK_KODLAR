#include <stdio.h>

//3478 ===>  8743
//9800 ===>  89

int main()
{
	int x;
	
	printf("4 basamakli bir tamsayi girin: ");
	scanf("%d", &x);

	printf("%d sayisinin basamaksal tersi %d\n", x, (x / 1000) + (x / 100 % 10 * 10) + (x / 10 % 10 * 100) + (x % 10 * 1000));
}
