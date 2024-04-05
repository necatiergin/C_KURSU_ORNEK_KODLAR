int main(void)
{
	int x = 10;
	int a[5] = { 0 };
	int* p1 = &x; // p1 points to x
	int* p2 = p1; // p2 points to x;
	int* p3 = &a[0]; // p3 points to a[0];
	int* p4 = a; //array to pointer conversion p4 points to a[0];
}
