int main()
{
	typedef int* IPTR;
	int x = 10;
	int y = 20;

	const IPTR ptr = &x;
	//int *const ptr = &x;

	//ptr = &y; //invalid
	*ptr = 500; // valid
}
