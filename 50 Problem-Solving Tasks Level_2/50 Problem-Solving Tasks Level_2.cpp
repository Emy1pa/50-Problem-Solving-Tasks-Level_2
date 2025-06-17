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
int PrintMinNumber(int Arr[100], int arrLength) {
	int MinNumber = Arr[0];
	for (int i = 0; i < arrLength; i++)
	{
		if (Arr[i] <  MinNumber)
			MinNumber = Arr[i];
	}
	return MinNumber;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	FillRandomNumbersToArray(arr, arrLength);
	
	cout << "Array Elements : ";
	PrintArray(arr, arrLength);

	cout << "Min Number is : " << PrintMinNumber(arr, arrLength);
	
	return 0;
}

