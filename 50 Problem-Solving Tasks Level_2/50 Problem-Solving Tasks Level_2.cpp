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
void PrintIfPerfectNumberOrNot(int Number){
	if (CheckPerfectNumber(Number))
		cout << Number << " is perfect \n";
	else
		cout << Number << " is not perfect \n";
}




int main()
{
	PrintIfPerfectNumberOrNot(ReadPositiveNumber("Please enter a positive number ?"));
}

