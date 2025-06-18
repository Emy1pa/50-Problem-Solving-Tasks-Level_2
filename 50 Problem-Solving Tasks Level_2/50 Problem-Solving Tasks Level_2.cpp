#include <iostream>
#include <cstdlib>
#include <cmath>
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

void SwapNumbers(int &Num1, int &Num2){
	int Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

int GenerateRandomNumber(int From, int To){
	int randomNumber = rand() % (To - From + 1) + From;
	return randomNumber;
}

void FillArrayWithNumsFrom1ToN(int Arr[100], int &arrLength) {
	for (int i = 0; i <= arrLength; i++)
	{
		Arr[i] = i + 1;
	}
	
}
void DisplayArrayElementsAfterShuffle(int Arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		SwapNumbers(Arr[GenerateRandomNumber(1, arrLength) - 1], Arr[GenerateRandomNumber(1, arrLength) - 1]);
	}
}


void PrintArray(int Arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}





int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	arrLength = ReadPositiveNumber("Please enter number of elements ?");

	FillArrayWithNumsFrom1ToN(arr, arrLength);

	cout << "Array elements before shuffle: ";
	PrintArray(arr, arrLength);
	cout << endl;
	
	cout << "Array elements after shuffle: ";
	DisplayArrayElementsAfterShuffle(arr, arrLength);
	PrintArray(arr, arrLength);
	cout << endl;
	return 0;
}

