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

void PrintNumberInReversedOrder(int Number) {
	int Remainder = 0;
	while (Number >= 1) {
	Remainder = Number % 10;
	cout << Remainder << endl; 
	Number /= 10; 
	}

}

int main()
{
	PrintNumberInReversedOrder(ReadPositiveNumber("Please enter a positive number ?"));
}

