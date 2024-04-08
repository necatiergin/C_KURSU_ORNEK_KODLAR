#include <stdio.h>

int main()
{
	int x;
	
	printf("bir tamsayi girin: ");
	(void)scanf("%d", &x); //0 girisi yapin

	if (x = 0)  
		printf("dogru\n");
	else
		printf("yanlis\n");

	printf("x = %d\n", x);
}
