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



int GenerateRandomNumber(int From, int To){
	int randomNumber = rand() % (To - From + 1) + From;
	return randomNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int &arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		Arr[i] = GenerateRandomNumber(1, 100);
	}
	
}



void PrintArray(int Arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}
void CopyArrayInReverse(int ArrSource[100], int ArrDestination[100], int& arrLength){
	for (int i = 0; i <arrLength; i++)
	{
		ArrDestination[i] = ArrSource[arrLength - (i + 1)];
	}
	cout << endl;
}





int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength, arr2[100];
	arrLength = ReadPositiveNumber("Please enter number of elements ?");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "Array 1 elements: ";
	PrintArray(arr, arrLength);

	CopyArrayInReverse(arr, arr2, arrLength);
	cout << "Array 2 elements after copying array 1 in reversed order: ";
	PrintArray(arr2, arrLength);
	cout << endl;
	

	cout << endl;
	return 0;
}

