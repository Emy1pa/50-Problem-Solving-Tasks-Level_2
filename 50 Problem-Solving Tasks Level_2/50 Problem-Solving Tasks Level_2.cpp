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

int printDigitFrequency(int Number, int DigitFrequency) {
	int Counter = 0, Remainder = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		if (DigitFrequency == Remainder) {
			Counter++;
		}
		Number /= 10;
	}
	return Counter;

}

int main()
{
	int Number = ReadPositiveNumber("Please enter a positive number ?");
	int DigitFrequency = ReadPositiveNumber("Please enter a digit to check ?");
	cout << "Digit " << DigitFrequency << " Frequency is " << printDigitFrequency(Number, DigitFrequency) << " Time(s).\n";
}

