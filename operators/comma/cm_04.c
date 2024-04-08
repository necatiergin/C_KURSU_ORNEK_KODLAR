//virgül operatörü ile oluşturulan ifade C diline L val. expr. değildir.

int main()
{
	int x = 45, y = 67;

	(x, y) = 90; //C'de gecersiz C++'da gecerli
}
