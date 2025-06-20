#include <iostream>
#include <cmath>
//#include <cstdlib>
using namespace std;float ReadNumber() {	float Number;	cout << "Please enter a number ? \n";	cin >> Number;	return Number;}int FloorOfTheNumber(float Number){	if (Number > 0)		return (int)Number;	else		return (int)Number - 1;}int main() {	//srand((unsigned)time(NULL));
	float Number = ReadNumber();

	cout << "My Floor Result: " << FloorOfTheNumber(Number) << endl;
	cout << "C++ Floor Result: " << floor(Number) << endl;
		return 0;}