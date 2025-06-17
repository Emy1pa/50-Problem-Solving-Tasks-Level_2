#include <iostream>
#include <cstdlib>
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

void PrintArrayCopy(int Arr[100], int arrLength) {
	int Arr2[100];
	for (int i = 0; i < arrLength; i++)
	{
		Arr2[i] = Arr[i];
		cout << Arr2[i] << " ";
	}
}




int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	
	FillRandomNumbersToArray(arr, arrLength);
	
	cout << "Array 1 Elements : ";
	PrintArray(arr, arrLength);

	cout << "Array 2 Elements after copy: ";
	PrintArrayCopy(arr, arrLength);
	return 0;
}

