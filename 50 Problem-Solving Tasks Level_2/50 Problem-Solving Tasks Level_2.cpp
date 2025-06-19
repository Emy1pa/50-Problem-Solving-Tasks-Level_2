#include <iostream>
#include <cstdlib>
using namespace std;int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}



void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
		cout << "Enter number of elements you want to generate : \n";
		cin >> arrLength;
		for (int i = 0; i < arrLength; i++)
			arr[i] = RandomNumber(1, 100);}void PrintRandomNumbers(int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}}void PrintSearchedNumber(int arr[100], int arrLength, int &SearchedNumber) {	cout << "\nPlease enter a number to search for ? \n";	cin >> SearchedNumber;	bool found = false;	for (int i = 0; i < arrLength; i++ ) {		if (arr[i] == SearchedNumber) {			cout << "The number you are looking for is : " << SearchedNumber << endl;			cout << "The number found at position : " << i << endl;			cout << "The number found its order : " << (i + 1) << endl;			found = true; 			break;		}		}	if (!found) {		cout << "\nThe number you are looking for is : " << SearchedNumber << endl;		cout << "The number is not found :-( " << endl;	}}int main(){	srand((unsigned)time(NULL));
	int arr[100], arrLength, searchedNumber;
	
	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "Array 1 elements: " << endl;
	PrintRandomNumbers(arr, arrLength);
	cout << endl;

	PrintSearchedNumber(arr, arrLength, searchedNumber);	return 0;}