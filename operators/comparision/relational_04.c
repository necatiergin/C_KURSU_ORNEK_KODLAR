#include <stdio.h>

int main()
{
	int x, y, z, t;
	int pos_cnt = 0;

	printf("4 sayi giriniz: ");
	(void)scanf("%d%d%d%d", &x, &y, &z, &t);

	if (x > 0)
		++pos_cnt;

	if (y > 0)
		++pos_cnt;

	if (z > 0)
		++pos_cnt;

	if (t > 0)
		++pos_cnt;

	printf("sayilardan %d tanesi pozitif\n", pos_cnt);
}
