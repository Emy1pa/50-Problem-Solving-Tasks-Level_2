#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string Message){
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void ReadArrayElements(int Arr[], int &Length) {
	Length = ReadPositiveNumber("Please how many Inputs you want to enter ? ");
	for (int i = 0; i < Length; i++)
	{
		cout << "Please enter element " << (i + 1) << endl;
		cin >> Arr[i];
	}
}
void PrintArrayElements(int Arr[], int Length) {
	for (int i = 0; i < Length; i++)
	{
		cout << "Element [" << (i + 1) << "] : " << Arr[i] << endl;
	}
}
int PrintTheCheckedNumber(int Arr[], int Length, int NumberToCheck) {
	int Counter = 0;
	for (int i = 0; i < Length; i++)
	{
		if (NumberToCheck == Arr[i])
			Counter++;
	}
	return Counter;
}



int main()
{
	int Arr[100], Length, NumberToCheck, RepeatedTimes;
	ReadArrayElements(Arr, Length);
	PrintArrayElements(Arr, Length);
	NumberToCheck = ReadPositiveNumber("\nPlease enter a number to check ?");
	RepeatedTimes = PrintTheCheckedNumber(Arr, Length, NumberToCheck);
	cout << NumberToCheck << " is repeated " << RepeatedTimes << " time(s) \n";
	return 0;
}

