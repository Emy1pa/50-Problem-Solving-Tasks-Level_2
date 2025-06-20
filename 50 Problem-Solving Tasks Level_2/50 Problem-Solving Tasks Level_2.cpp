#include <iostream>
#include <cmath>
//#include <cstdlib>
using namespace std;float ReadAbs() {	float AbsNumber;	cout << "Please enter a number ? \n";	cin >> AbsNumber;	return AbsNumber;}int MyAbsoluteFunction(float AbsNumber){	if (AbsNumber < 0) {		return AbsNumber * -1;	}	return AbsNumber;}int main() {	//srand((unsigned)time(NULL));
	
	float AbsNumber = ReadAbs();	cout << "My abs Result : " << MyAbsoluteFunction(AbsNumber) << endl;	cout << "C++ abs Result : " << abs(AbsNumber) << endl;	return 0;}