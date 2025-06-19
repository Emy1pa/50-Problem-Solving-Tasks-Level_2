#include <iostream>
#include <cstdlib>
using namespace std;int ReadPositiveNumber(string Message) {	int Number = 0;	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);	return Number;}int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}



void FillArrayWithRandomNumbersDynamically(int arr[100], int &Counter) {
	char Response = 'Y';	int Number = 0;	Counter = 0;	do
	{
		Number = ReadPositiveNumber("Please enter a number ?");
		arr[Counter] = Number;
		cout << "Do you want to add more numbers (Y/N) ? \n";
		cin >> Response;
		Counter++;
	} while (Response == 'Y' || Response == 'y');}void PrintNumersInDynamicArray(int arr[100], int Counter) {	for (int i = 0; i < Counter; i++)
	{
		//cout << Counter << endl;
		cout << arr[i] << " ";
	}}int main(){	srand((unsigned)time(NULL));
	int arr[100], counter;
	
	FillArrayWithRandomNumbersDynamically(arr, counter);
	
	cout << "Array Length : " << counter << endl;
	cout << "Array Elements: ";
	PrintNumersInDynamicArray(arr, counter);
	cout << endl;

		return 0;}