#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharacterType { Number = 1, SmallLetter = 2, CapitalLetter = 3, Character = 4 };

int RandomNumber(int From, int To) {
	int Number = rand() % (To - From + 1) + From;
	return Number;
}

char getRandomCharacter(enCharacterType CharacterType){
	switch (CharacterType)
	{
	case enCharacterType::Number:
		return char(RandomNumber(48, 57));
	case enCharacterType::SmallLetter:
		return char(RandomNumber(97, 122));
	case enCharacterType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enCharacterType::Character:
		return char(RandomNumber(33, 47));
	default:
		break;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	cout << "Random Number = " << getRandomCharacter(enCharacterType::Number) << endl;
	cout << "Random Capital Letter = " << getRandomCharacter(enCharacterType::CapitalLetter) << endl;
	cout << "Random Special Character = " << getRandomCharacter(enCharacterType::Character) << endl;
	cout << "Random Small Letter = " << getRandomCharacter(enCharacterType::SmallLetter) << endl;
	return 0;
}

