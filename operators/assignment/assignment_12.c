#include <stdio.h>

int main()
{
	int sec, min, hour, day;

	printf("gun, saat, dakika ve saniye olarak sure degerini giriniz ");
	scanf("%d%d%d%d", &day, &hour, &min, &sec);

	min += sec / 60;
	sec %= 60;
	hour += min / 60;
	min %= 60;
	day += hour / 24;
	hour %= 24;

	printf("%d gun %d saat %d dakika %d saniye\n", day, hour, min, sec);
}
