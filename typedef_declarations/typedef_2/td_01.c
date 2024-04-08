typedef int (*Fptr)(int, int);

int foo(int, int);
int bar(int, int);
int baz(int, int);

Fptr func(Fptr);
//int (*func(int (*)(int, int)))(int, int);

int main()
{
	Fptr fp = foo;
	//int (*fp)(int, int) = foo;
	
	Fptr ar[] = { foo, bar, baz };
	//int (*ar[])(int, int) = {foo, bar, baz};
	
	Fptr* fpp = &fp;
	int (**fpp)(int, int) = &fp;
}
