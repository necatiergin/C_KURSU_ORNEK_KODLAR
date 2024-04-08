#include <stdio.h>

int main()
{
	int hour;
	int n;

	printf("saat kac: ");
	scanf("%d", &hour);
	printf("kac saat sonrasi: ");
	scanf("%d", &n);

	printf("saat %d ve %d saat sonra %d olacak\n", hour, n, (hour + n) % 12);
}
