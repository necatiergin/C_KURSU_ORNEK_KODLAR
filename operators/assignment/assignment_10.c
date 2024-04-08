//bir sol taraf değeri ifadesi ile bir sağ taraf değeri ifadesini eşitlik karşılaştırmasına sokuyorsanız

// LV == RV  yazmak yerine
// RV == LV yazabilirsiniz

// Bu durumda == yerine = kullanırsanız sentaks hatası oluşur

#include <stdio.h>


int main()
{
	int x;

	printf("bir tamsayi girin: ");
	(void) scanf("%d", &x);

	if (7 == x)
		printf("dogru\n");
	else
		printf("yanlis\n");

	printf("x = %d\n", x);
}
