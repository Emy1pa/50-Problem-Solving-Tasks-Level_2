#include <iostream>
#include <cstdlib>
using namespace std;void FillArray(int arr[100], int &arrLength) {		arrLength = 6;	arr[0] = 10;	arr[1] = 20;	arr[2] = 30;	arr[3] = 30;	arr[4] = 20;	arr[5] = 10;}void PrintArray(int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}	cout << endl;}bool IsPalindromeArrayCheck(int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - 1 - i]) {
			return false;
		}
	}	return true;}int main() {	srand((unsigned)time(NULL));
	
	int arr[100], arrLength;

	FillArray(arr, arrLength);

	cout << "Array Elements : " << endl;
	PrintArray(arr, arrLength);
	cout << endl; 	if (IsPalindromeArrayCheck(arr, arrLength)) {		cout << "Yes array is Palindrome \n";	}	return 0;}