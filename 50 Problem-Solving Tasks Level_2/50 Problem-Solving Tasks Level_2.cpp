#include <iostream>
using namespace std;


string ReadPassword() {
	string Password;
	cout << "Please enter a 3-Letter Password (AAA => ZZZ) ?\n";
	cin >> Password;
	return Password;
}

bool Guess3_LetterPassword() {
	string Password = ReadPassword();
	string Word = "";
	int Counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				Word += char(i);
				Word += char(j);
				Word += char(k);
				Counter++;
				cout << "Trial [" << Counter << "]: " << Word << endl;
				if (Word == Password) {
					cout << "Password is " << Password << endl;
					cout << "Found after " << Counter << " Trial(s)" << endl;
					return true;
				}
				Word = "";
				
			}
		}
	}
}


int main()
{
	Guess3_LetterPassword();
	return 0;
}

