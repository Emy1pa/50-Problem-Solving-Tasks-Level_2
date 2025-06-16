#include <iostream>
#include <cstdlib>
using namespace std;

int GenerateRandomNumberFrom1To10() {
	int Number = rand() % 10 + 1;
	return Number;
}

int main()
{
	srand(time(0));
	cout << "Number 1 = " << GenerateRandomNumberFrom1To10() << endl;
	cout << "Number 2 = " << GenerateRandomNumberFrom1To10() << endl;
	cout << "Number 3 = " << GenerateRandomNumberFrom1To10() << endl;
	return 0;
}

