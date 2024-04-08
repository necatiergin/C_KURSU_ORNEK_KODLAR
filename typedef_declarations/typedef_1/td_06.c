int main()
{
	typedef const int* CIPTR;
	int x = 10;
	int y = 20;

	const CIPTR ptr = &x;
	//int *const const ptr = &x;

	//ptr = &y; //invalid
	//*ptr = 500; // invalid
}
