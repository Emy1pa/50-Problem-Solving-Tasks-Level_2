#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;




int GenerateRandomNumber(int From, int To){
	int randomNumber = rand() % (To - From + 1) + From;
	return randomNumber;
}

void FillRandomNumbersToArray(int Arr[100], int &arrLength) {
	cout << "Enter number of elements: \n";
	cin >> arrLength;
	cout << "\n";
	for (int i = 0; i < arrLength; i++)
	{
		Arr[i] = GenerateRandomNumber(1, 100);
	}
	
}

void PrintArray(int Arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}

void PrintSumOfBothArray(int ArrSource[100], int ArrDestination[100], int arrLength){
	int Sum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Sum = ArrDestination[i] + ArrSource[i];
		cout << Sum << " ";
	}
}




int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	
	FillRandomNumbersToArray(arr, arrLength);
	
	int Arr2[100];
	cout << "Array 1 Elements : ";
	PrintArray(arr, arrLength);
	cout << endl;

	FillRandomNumbersToArray(Arr2, arrLength);
	cout << "Array 2 Elements: ";
	PrintArray(Arr2, arrLength);
	cout << endl;

	cout << "Sum of array 1 and array 2 elements: ";
	PrintSumOfBothArray(arr, Arr2, arrLength);
	cout << endl;

	return 0;
}

