#include <stdio.h>

int main()
{
	int x, y, z, t;
	int pos_cnt;

	printf("4 sayi giriniz: ");
	(void)scanf("%d%d%d%d", &x, &y, &z, &t);
	pos_cnt = (x > 0) + (y > 0) + (z > 0) + (t > 0);

	printf("sayilardan %d tanesi pozitif\n", pos_cnt);
}
