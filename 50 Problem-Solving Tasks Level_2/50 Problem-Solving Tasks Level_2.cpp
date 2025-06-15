#include <iostream>
using namespace std;


string ReadText() {
	string Text;
	cout << "Please enter a text to encrypt/decrypt ? \n";
	cin >> Text;
	return Text;
}
string EncryptionText(string Text){
	string EncryptionText = "";
	for (int i = 0; i < Text.length(); i++)
	{
		EncryptionText += char((int)Text[i] + 2);
	}
	return EncryptionText;
}
string DecryptionText(string Text) {
	string DecryptionText = "";
	for (int i = 0; i <= Text.length(); i++)
	{
		DecryptionText += char((int)Text[i] - 2);
	}
	return DecryptionText;
}


int main()
{
	string Text = ReadText();
	cout << "Text Before Encryption: " << Text << endl;
	cout << "Text After Encryption: " << EncryptionText(Text) << endl;
	cout << "Text After Decryption: " << DecryptionText(EncryptionText(Text)) << endl;
	return 0;
}

