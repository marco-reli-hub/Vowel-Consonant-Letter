// 10. Write a code to check whether an alphabet is a vowel or a consonant.

#include <iostream>
using namespace std;

int main() {
	char letter;

	cout << "Enter a letter: ";
	cin >> letter;

	switch (letter) {
	case 'a':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'e':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'i':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'o':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'u':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'A':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'E':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'I':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'O':
		cout << "It's a vowel letter!" << endl;
		break;
	case 'U':
		cout << "It's a vowel letter!" << endl;
		break;
	default:
		cout << "It's a consonant letter!" << endl;
		break;
	}
	
	return 0;
}
