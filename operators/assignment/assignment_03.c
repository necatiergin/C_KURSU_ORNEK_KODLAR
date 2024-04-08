#include <stdio.h>

int main()
{
	int ch;

	printf("bir yazi girin: ");

	while ((ch = getchar()) != '\n') {
		printf("%c  %d\n", ch, ch);
	}
}
