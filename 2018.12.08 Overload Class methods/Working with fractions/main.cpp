#include <iostream>
#include "Fraction.h"
//#include "main.h"
using namespace std;
int main()
{
	Fraction a(1, 2), b(2, 4);
	(a + b).print();

	Fraction test = a++; // 
	test.print();// 1/2
	a.print(); // 3/2

	//(a.operator+(b)).print();




}