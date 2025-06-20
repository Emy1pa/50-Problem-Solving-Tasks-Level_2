#include <iostream>
#include <cmath>
//#include <cstdlib>
using namespace std;float ReadNumber() {	float Number;	cout << "Please enter a number ? \n";	cin >> Number;	return Number;}int CeilOfTheNumber(float Number){	if (Number > 0)		return (int)Number + 1;	else		return (int)Number;}int main() {	//srand((unsigned)time(NULL));
	float Number = ReadNumber();

	cout << "My Ceil Result: " << CeilOfTheNumber(Number) << endl;
	cout << "C++ Ceil Result: " << ceil(Number) << endl;
		return 0;}