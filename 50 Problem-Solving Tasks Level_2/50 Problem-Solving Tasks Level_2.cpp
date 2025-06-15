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

void InvertedLetterPattern(int Number) {
	for (int i = 65+(Number - 1); i >= 65; i--)
	{
		for (int j = 65; j <= i; j++) {
			cout << char(i);
		}
		cout << endl;
	}
}


int main()
{
	InvertedLetterPattern(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}

