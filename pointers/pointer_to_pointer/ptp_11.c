#include <stdio.h>
#include <string.h>
	
#define  asize(a)			(sizeof(a) / sizeof(*a))

void pswap(char** p1, char** p2)
{
	char* ptemp = *p1;
	*p1 = *p2;
	*p2 = ptemp;
}

void print_names(char* const* ptr, size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		printf("%s ", ptr[i]);
	}
	printf("\n");
}

void sort_names(char** ptr, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i) {
		for (size_t k = 0; k < size - 1 - i; ++k) {
			if (strcmp(ptr[k], ptr[k + 1]) > 0) {
				pswap(ptr + k, ptr + k + 1);
			}
		}
	}
}

int main()
{
	char* p[] = {
		"kamil", "korhan", "beril", "turhan", "ufuk", "murathan", "figen", "malik", "bulent", "cengiz",
		"baran", "nurullah", "dilber", "tuncer", "recep", "pelinsu", "cihan", "yesim", "aziz", "kazim",
		"afacan", "tevfik", "sumeyye", "hande", "aslihan", "emine", "temel", "gulsah", "hasan", "gul",
		"soner", "ayla", "cuneyt", "tekin", "binnaz", "emrecan", "yasar", "yilmaz", "feraye", "tugra",
		"melek", "garo", "yurdagul", "tarik", "derin", "handan", "aytac", "petek", "cem", "aylin",
		"gursel", "haldun", "nazife", "hulusi", "sevilay", "sabriye", "gulden", "tansel", "ege", "turgut",
		"cahit", "berk", "nazli", "aykut", "kayhan", "cemre", "murat", "kunter", "gunay", "cahide",
		"nedim", "metin", "kerim", "utku", "cumhur", "kurthan", "poyraz", "can", "candan", "hikmet" };

	print_names(p, asize(p));
	sort_names(p, asize(p));
	print_names(p, asize(p));
}
