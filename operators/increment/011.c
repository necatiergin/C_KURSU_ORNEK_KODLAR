//arttırma ve eksiltme operatörlerinin operandları 
//sol taraf değeri ifadesi (L value expression) olmalı

#include <stdio.h>

int main()
{
	int x = 5;

	//++10; //gecersiz
	//++(x - 3); //gecersiz
	//++ +x;  //gecersiz
	++x;
}
