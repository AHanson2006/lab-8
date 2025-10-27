#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main() {
	string str;
	int charCount = 0;

	cout << "Enter string: ";
	getline(cin, str);

	cout << endl << countCharacter(str) << " Characters.";

	
}

int countCharacter(string str) {
	
	int charCount = 0;
	
	for (int i = 0; i < size(str); i++) {
		if (str[i] != ' ') {
			charCount++;
		}
	}

	return charCount;
}