#include <iostream>
#include <cstdlib>
using namespace std;int RandomNumber(int From, int To){	int RandomNumber = rand() % (To - From + 1) + From;	return RandomNumber;}void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {	cout << "How many elements do you want to enter ? \n";	cin >> arrLength;	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(-100, 100);
	}}void PrintArray(int arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}	cout << endl;}int NegativeNumberCount(int arr[100], int arrLength) {	int Counter = 0;	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < 0) {
			Counter++;
		}
	}	return Counter;}int main() {	srand((unsigned)time(NULL));
	
	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "Array Elements : " << endl;
	PrintArray(arr, arrLength);
	cout << endl; 	cout << "Negative Numbers Count is: " << NegativeNumberCount(arr, arrLength) << endl;		return 0;}