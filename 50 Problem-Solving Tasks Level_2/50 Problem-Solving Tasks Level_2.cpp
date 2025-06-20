#include <iostream>
#include <cmath>
using namespace std;float ReadNumber() {	float Number;	cout << "Please enter a number ? \n";	cin >> Number;	return Number;}int SqrtOfTheNumber(float Number){	return pow(Number, 0.5);}int main() {	float Number = ReadNumber();

	cout << "My Sqrt Result: " << SqrtOfTheNumber(Number) << endl;
	cout << "C++ Sqrt Result: " << sqrt(Number) << endl;
		return 0;}