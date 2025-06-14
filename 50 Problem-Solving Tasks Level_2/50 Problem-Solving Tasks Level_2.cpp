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

bool CheckPerfectNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Sum == Number;
}
void PrintPerfectNumberFrom1ToN(int Number){
	cout << "\n";
	cout << "Displaying Perfect Numbers from " << 1 << " To ";
	cout << Number << " are : " << endl;
	for (int i = 1; i < Number; i++)
	{
		if (CheckPerfectNumber(i))
			cout << i << endl;
	}
}

int main()
{
	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number ?"));
}

