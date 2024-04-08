int foo(void);

int main()
{
	int x, y, z, t;

	//t = foo();
	//z = t;
	//y = z;
	//x = y;

	x = y = z = t = foo();
}
