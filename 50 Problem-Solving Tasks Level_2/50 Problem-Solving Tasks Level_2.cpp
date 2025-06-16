#include <iostream>
#include <cstdlib>
using namespace std;

int GetRandomNumber(int From, int To) {
	int Number = rand() % (To - From + 1) + From;
	return Number;
}

int askKeyCount() {
	int count;
	cout << "Please enter how many Keys you want to generate ? \n";
	cin >> count;
	return count;
}
string generateKeySegment() {
	string segment;
	for (int i = 1; i <= 4; i++)
	{
		segment += char(GetRandomNumber(65, 90));
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
void displayGeneratedKeys() {
	int numberOfKeys = askKeyCount();
	for (int i = 1; i <= numberOfKeys; i++) {
		cout << "Key [" << i << "] : " << generateFullKey() << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));
	displayGeneratedKeys();
	return 0;
}

