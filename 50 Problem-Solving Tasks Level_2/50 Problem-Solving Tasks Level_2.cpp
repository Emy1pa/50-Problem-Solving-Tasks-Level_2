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
int ReverseNumber(int Number){
	int Remainder = 0, Number2 = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
bool CheckIfPalindrome(int Number){
	
	return Number == ReverseNumber(Number);
}
void PrintTheResult(int Number){
	if (CheckIfPalindrome(Number))
		cout << "Yes, it is a Palindrome number.";
	else
		cout << "No, it ns NOT a Palindrome number.";
}


int main()
{
	//cout << CheckIfPalindrome(ReadPositiveNumber("Please enter a number ?"));
	PrintTheResult(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}

