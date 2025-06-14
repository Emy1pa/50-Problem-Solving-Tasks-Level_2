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

int checkDigitFrequency(int Number, short DigitFrequency) {
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
void PrintDigitFrequency(int Number){
	int DigitFrequency;
	for (int i = 1; i < 10; i++)
	{
		DigitFrequency = checkDigitFrequency(Number, i);
		if (DigitFrequency > 0) {
			cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s) \n";
		}
	}
}


int main()
{
	PrintDigitFrequency(ReadPositiveNumber("Please enter a positive number ?"));
}

