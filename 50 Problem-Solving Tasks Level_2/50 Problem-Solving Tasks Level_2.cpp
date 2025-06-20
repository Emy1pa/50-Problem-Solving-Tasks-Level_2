#include <iostream>
#include <cmath>
//#include <cstdlib>
using namespace std;float ReadNumber() {	float Number;	cout << "Please enter a number ? \n";	cin >> Number;	return Number;}float RoundOfTheNumber(float Number){	int IntPart = int(Number);	cout << IntPart << endl;	float DecimalPart = Number - IntPart;	if (DecimalPart >= 0.5) {			return IntPart + 1;	}	else if (DecimalPart <= -0.5) {		return IntPart - 1;	}	else {		return IntPart;	}}int main() {	//srand((unsigned)time(NULL));
	float Number = ReadNumber();

	cout << "My Round Result: " << RoundOfTheNumber(Number) << endl;
	cout << "C++ Round Result: " << round(Number) << endl;
		return 0;}