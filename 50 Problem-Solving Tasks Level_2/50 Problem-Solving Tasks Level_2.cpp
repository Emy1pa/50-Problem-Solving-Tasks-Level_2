#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//int ReadPositiveNumber(string Message){
//	int Number;
//	do
//	{
//		cout << Message << endl;
//		cin >> Number;
//	} while (Number < 0);
//	return Number;
//}
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrimeNumber(int Number){
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

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

void PrimeNumbersCopy(int ArrSource[100], int ArrDestination[100], int arrLength, int &PrimeCount) {
	PrimeCount = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrimeNumber(ArrSource[i]) == enPrimeNotPrime::Prime) {
			ArrDestination[PrimeCount] = ArrSource[i];
			PrimeCount++;
		}
	}
}




int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	
	FillRandomNumbersToArray(arr, arrLength);
	
	int Arr2[100], PrimeCount;
	PrimeNumbersCopy(arr, Arr2, arrLength, PrimeCount);

	cout << "Array 1 Elements : ";
	PrintArray(arr, arrLength);

	cout << "Prime Numbers in Array2: ";
	PrintArray(Arr2, PrimeCount);
	return 0;
}

