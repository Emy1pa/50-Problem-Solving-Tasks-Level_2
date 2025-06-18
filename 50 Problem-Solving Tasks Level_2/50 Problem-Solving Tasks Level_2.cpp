#include <iostream>
#include <cstdlib>
using namespace std;int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

string generateKeySegment() {
	string segment;
	for (int i = 1; i <= 4; i++)
	{
		segment += char(RandomNumber(65, 90));
	}
	return segment;
}
string generateFullKey() {
	string fullKey;
	for (int i = 1; i <= 4; i++)
	{
		fullKey += generateKeySegment();
		if (i < 4) {
			fullKey += "-";
		}
	}
	return fullKey;
}
void FillArrayWithKeys(string arr[100], int& arrLength) {
		cout << "Enter number of Keys you want to generate : \n";
		cin >> arrLength;
		for (int i = 0; i < arrLength; i++)
			arr[i] = generateFullKey();}void PrintKeys(string arr[100], int arrLength) {	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array[" << i << "]: " << arr[i] << endl;
	}}int main(){	srand((unsigned)time(NULL));
	string arr[100];
	int arrLength;
	
	FillArrayWithKeys(arr, arrLength);
	PrintKeys(arr, arrLength);
		return 0;}