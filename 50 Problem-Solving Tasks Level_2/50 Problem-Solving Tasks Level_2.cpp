#include <iostream>
#include <cstdlib>
using namespace std;int ReadNumber()
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

//void  InputUserNumbersInArray(int arr[100], int& arrLength) {
//	bool AddMore = true;
//	do
//	{
//		AddArrayElement(ReadNumber(), arr, arrLength);
//		cout << "\nDo you want to add more numbers ? [0]: No, [1]: Yes?";
//		cin >> AddMore;
//	} while (AddMore);
//}


void PrintArray(int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		//cout << Counter << endl;
		cout << arr[i] << " ";
	}	cout << endl;}void CopyingArrayUsingAddArrayElement(int arr[100], int arr2[100], int arrLength, int& arr2Length) {
	for (int i = 0; i < arrLength; i++)
	{
		AddArrayElement(arr[i], arr2, arr2Length);
	}}int main() {	srand((unsigned)time(NULL));
	int arr[100], arr2[100], Number = 0, arr2Length = 0;

	int arrLength = ReadNumber();

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << endl;

	cout << "Array 1 elements : \n";
	PrintArray(arr, arrLength);
	cout << endl;


	CopyingArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

	cout << "Array 2 elements after copy: \n";
	PrintArray(arr2, arr2Length);
	cout << endl;

	return 0;}