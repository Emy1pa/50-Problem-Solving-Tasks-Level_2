#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number; 
	} while (Number <= 0);
	return Number;
}

int PrintReversedNumber(int Number) {
	int Remainder = 0, Number2= 0;
	while (Number > 0) {
		Remainder = Number % 10; 
		Number /= 10;
		Number2 = Number2 * 10 + Remainder; 
		/*
		0 * 10 + 4 = 4;
		4 * 10 + 3 = 43;
		43 * 10 + 2	= 432;
		432 * 10 + 1 = 4321;
		*/
	}
	return Number2;

}

int main()
{
	cout << "Reverse is : " << PrintReversedNumber(ReadPositiveNumber("Please enter a positive number ?"));
}

