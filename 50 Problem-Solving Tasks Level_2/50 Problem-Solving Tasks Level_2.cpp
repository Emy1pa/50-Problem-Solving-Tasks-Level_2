#include <iostream>
#include <cstdlib>
using namespace std;void FillArray(int arr[100], int &arrLength) {	arrLength = 10;	arr[0] = 10;	arr[1] = 10;	arr[2] = 10;	arr[3] = 50;	arr[4] = 50;	arr[5] = 70;	arr[6] = 70;	arr[7] = 70;	arr[8] = 70;	arr[9] = 90;}void PrintArray(int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}	cout << "\n";}short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;
	}	return -1;}bool IsNumberInArray(int Number, int arr[100], int arrLength) {	return FindNumberPositionInArray(Number, arr, arrLength) != -1;}void AddArrayElement(int Number, int arr[100], int& arrLength)
{ 
	arrLength++;
	arr[arrLength - 1] = Number;
}void CopyDistinctNumbersToArray(int arr[100], int arr2[2], int arrLength, int &arr2Length) {	for (int i = 0; i < arrLength; i++)
	{
		if (!IsNumberInArray(arr[i], arr2, arrLength)) {
			AddArrayElement(arr[i], arr2, arr2Length);
		}
	}}int main() {	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0, arr2Length = 0, arr2[100];
	FillArray(arr, arrLength);
	
	cout << "\nArray 1 elements : \n";
	PrintArray(arr, arrLength);

	CopyDistinctNumbersToArray(arr, arr2, arrLength, arr2Length);
	
	cout << "\nArray 1 Distinct Elements : \n";
	PrintArray(arr2, arr2Length);

	return 0;}