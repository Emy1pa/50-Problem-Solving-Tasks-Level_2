#include <iostream>
#include <cstdlib>
using namespace std;enum enPrimNotPrime { Prime = 1, NotPrime = 2 };enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}int ReadNumber()
{
	int Number;
	cout << "\nPlease enter numbers of elements you want to enter? \n";
	cin >> Number;
	return Number;
}int RandomNumber(int From, int To) {	int RandomNumber = rand() % (To - From + 1) + From;	return RandomNumber;}void AddArrayElement(int Number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = Number;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}


void PrintArray(int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		//cout << Counter << endl;
		cout << arr[i] << " ";
	}	cout << endl;}void CopyingPrimeNumbersUsingAddArrayElement(int arr[100], int arr2[100], int arrLength, int& arr2Length) {
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arr[i]) == enPrimNotPrime::Prime)
			AddArrayElement(arr[i], arr2, arr2Length);
	}}int main() {	srand((unsigned)time(NULL));
	int arr[100], arr2[100], Number = 0, arr2Length = 0;

	int arrLength = ReadNumber();

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << endl;

	cout << "Array 1 elements : \n";
	PrintArray(arr, arrLength);
	cout << endl;


	CopyingPrimeNumbersUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

	cout << "Array 2 Prime Numbers: \n";
	PrintArray(arr2, arr2Length);
	cout << endl;

	return 0;}