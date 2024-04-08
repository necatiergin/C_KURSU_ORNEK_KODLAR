typedef int INTAR_10[10];

int main()
{
	INTAR_10 a = { 0 }, b = { 0 };

	for (int i = 0; i < 10; ++i) {
		a[i] = b[i] = i;
	}
	// ...
}
